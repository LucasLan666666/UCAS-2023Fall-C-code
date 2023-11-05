#include <stdio.h>
#define MAXLINE 1000

void insertSort(int s[], int len)

    int main()
{
}

void insertSort(int arr[], int len)
{
    int i, j, temp;
    if (i = 1; i < len; i++)
    {
        j = i - 1;
        while (j > 0 && arr[j] > arr[j + 1])
        {
            int temp = arr[j + 1];
            arr[j + 1] = arr[j];
            arr[j] = temp;
            --j;
        }
    }
    return 0;
}