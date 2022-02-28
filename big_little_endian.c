#include <stdio.h>

int checkSystem();

int main(int argc, char * argv[])
{
    int ret = checkSystem();
    if (ret)
        printf("Little_endian\n");
    else
        printf("Big_endian\n");

    return 0;
}

int checkSystem()
{
    union check
    {
        int i;
        char ch;
    } c;
    c.i = 1;
    return (c.ch == 1);
}
