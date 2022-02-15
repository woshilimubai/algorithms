#include <stdio.h>
#include <stdlib.h>

#define MAXSIZE 10

void input(); //输入数组
void output(); //输出数组
int partition(int low, int high); //一趟快速排序排
void quick_sort(int s, int e); //快速排序

int arr[MAXSIZE];
int count = 0;

int main()
{
    input();
    quick_sort(1, count);
    output();

    return 0;
}

//一趟快排
//定义一个high，low，key(记录枢轴的值)
//最后将枢轴移到正确位置，返回枢轴的位置
int partition(int low, int high)
{
    arr[0] = arr[low]; //arr[0]记录枢轴，待排序列从arr[1]开始
    while (low < high)
    {
        while(low < high && arr[high] >= arr[0])
            --high;
        arr[low] = arr[high];

        while (low < high && arr[low] <= arr[0])
            ++low;
        arr[high] = arr[low];
    }
    arr[low] = arr[0];
    return low;  //返回枢轴的位置
}

// quick sort function
void quick_sort(int s, int e){
    if (s < e) //s与e是待排序区域的上下界
    {
        int key_position = partition(s, e); //对待排序列进行一次划分，并返回枢轴位置
        quick_sort(s, key_position-1);        //对左侧子序列递归排序
        quick_sort(key_position+1, e);        //对右侧子序列递归排序
    }

}

// input numbers
void input()
{
    int x, i;
    char s;
    printf("please input less than %d numbers, end with enter:\n", MAXSIZE);
    for (i = 1; s != '\n'; i++)
    {
        scanf("%d", &arr[i]);
        s = getchar();
        count++;
    }
}

// output numbers
void output()
{
    printf("sorted numbers:\n");
    for (int i = 1; i <= count; i++){
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

