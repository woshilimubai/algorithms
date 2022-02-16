#include <stdio.h>

#define LENGTH 5

int Strncmp(char * str1, char * str2, int n);

int main(int argc, const char * argv[])
{
    char str1[] = "abcdef";
	char str2[] = "abcd";

	printf("%d\n", Strncmp(str1, str2, 4));
	printf("%d\n", Strncmp(str1, str2, 5));
	printf("%d\n", Strncmp(str1, str2, 100));
	printf("%d\n", Strncmp(str2, str1, 4));
	printf("%d\n", Strncmp(str2, str1, 5));
	printf("%d\n", Strncmp(str2, str1, 100));

    return 0;
}

int Strncmp(char * str1, char * str2, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (*(str1 + i) > *(str2 + i))
            return 1;
        else if (*(str1 + i) < *(str2 + i))
            return -1;
        if (*(str1 + i) == 0 || *(str2 + i) == 0)
            break;
    }
    return 0;
}

