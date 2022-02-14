#include <stdio.h>
#include <string.h>

#define MAXSIZE 100

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
    printf("please input less than 100 numbers, end with enter:\n");
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
    int i, j, temp;
    // sort the number
    for (i = 0; i < count; i++)
    {
        for (j = i + 1; j < count; j++)
        {
            if (nums[i] > nums[j])
            {
                temp = nums[j];
                nums[j] = nums[i];
                nums[i] = temp;
            }
            
        }
    }
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

// output numbers
void output()
{
    printf("sorted numbers:\n");
    for (int i = 0; i < count; i++){
        printf("%d\t", nums[i]);
    }
    printf("\n");
}
