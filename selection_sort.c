#include <stdio.h>
#include <string.h>

#define MAXSIZE 10

void input();
void output();
void selection_sort();

int nums[MAXSIZE];
int count = 0;

int main()
{

    input();
    selection_sort();
    output();

    return 0;
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

// selection sort function
void selection_sort()
{
    int i, j, min, temp;
    // sort the number
    for (i = 0; i < count; i++)
    {
        min = i;
        // 只记录最小值的下标,循环结束后再交换
        for (j = i + 1; j < count; j++)
        {
            if (nums[min] > nums[j])
            {
                min = j;
            }
        }
        temp = nums[i];
        nums[i] = nums[min];
        nums[min] = temp;
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

