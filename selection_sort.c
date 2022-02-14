#include <stdio.h>
#include <string.h>

#define N 10
int main()
{
    printf("Please input N numbers:\n>");
    int nums[N];
    int i, j, temp;

    // get the nums
    for (i = 0; i < N; i++)
    {
        scanf("%d", &nums[i]);
    }

    // sort the number
    for (i = 0; i < N; i++)
    {
        for (j = i + 1; j < N; j++)
        {
            if (nums[i] > nums[j])
            {
                temp = nums[j];
                nums[j] = nums[i];
                nums[i] = temp;
            }
            
        }
    }

    // print sorted numbers
    printf("The result:\n");
    for (i = 0; i < N; i++)
    {
        printf("%d ", nums[i]);
    }
    printf("\n");

    return 0;
}
