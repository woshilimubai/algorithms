#include <stdio.h>

#define MAXSIZE 10

void input();
void output();
void bubble_sort();

int nums[MAXSIZE];
int count = 0;

int main()
{
    input();
    bubble_sort();
    output();

    return 0;
}

// bubble sort function
void bubble_sort()
{
    int i, j, temp;
    for (i = 0; i < count-1; i++)
    {
        for (j = 0; j < count-i-1; j++)
        {
            if (nums[j] > nums[j+1])
            {
                temp = nums[j];
                nums[j] = nums[j+1];
                nums[j+1] = temp;
            }
        }
    }

}

// input numbers
void input()
{
    int i;
    char s;
    printf("please input less than %d numbers, end with enter:\n", MAXSIZE);
    for (i = 0; s != '\n'; i++)
    {
        scanf("%d", &nums[i]);
        s = getchar();
        count++;
    }
}

// output numbers
void output()
{
    printf("sorted numbers:\n");
    for (int i = 0; i < count; i++){
        printf("%d\t", nums[i]);
    }
    printf("\n");
}

