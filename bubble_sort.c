#include <stdio.h>
#include <string.h>

#define N 10
int main()
{
    printf("Please input N numbers:\n>");
    int nums[N];
    int temp, i, j;

    // get the nums
    for (i = 0; i < N; i++)
    {
        scanf("%d", &nums[i]);
    }

    // sort the number
    for (i = 0; i < N-1; i++)
    {
        for (j = 0; j < N-i-1; j++)
        {
            if (nums[j] > nums[j+1])
            {
                temp = nums[j];
                nums[j] = nums[j+1];
                nums[j+1] = temp;
            }
        }
    }
    
    // print sorted numbers
    printf("The result:\n");
    for (i = 0; i < N; i++)
    {
        printf("%d\t", nums[i]);
    }
    printf("\n");

    return 0;
}
