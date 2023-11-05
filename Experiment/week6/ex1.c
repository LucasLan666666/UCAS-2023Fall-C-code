#include <stdio.h>
#define MAXLINE 1000

void insertSort(int arr[], int len); // 插入排序
int mygetnum();                      // 读取数字
int mygetlineSort(int s[]);          // 读取一行数字并排序，输出对应数组长度
int c;                               // 读取的字符（全局变量）

int main()
{
    int num1[MAXLINE], num2[MAXLINE], num3[MAXLINE]; // 三个数组用以存储每行输入的数字
    int len1, len2, len3;                            // 三个数组的长度

    len1 = mygetlineSort(num1);
    len2 = mygetlineSort(num2);
    len3 = mygetlineSort(num3);

    insertSort(num1, len1);
    insertSort(num2, len2);
    insertSort(num3, len3);

    putchar('\n');
    for (int i = 0; i < len1; i++)
        printf("%d ", num1[i]);
    putchar('\n');
    for (int i = 0; i < len2; i++)
        printf("%d ", num2[i]);
    putchar('\n');
    for (int i = 0; i < len3; i++)
        printf("%d ", num3[i]);
    putchar('\n');

    return 0;
}

void insertSort(int arr[], int len)
{
    int j, temp;
    for (int i = 1; i < len; i++)
    {
        j = i - 1;
        while (j >= 0 && arr[j] > arr[j + 1])
        {
            int temp = arr[j + 1];
            arr[j + 1] = arr[j];
            arr[j] = temp;
            --j;
        }
    }
}

int mygetnum()
{
    int num = c - '0';
    while ((c = getchar()) >= '0' && c <= '9')
    {
        num = num * 10 + c - '0';
    }
    return num;
}

int mygetlineSort(int s[])
{
    int i = 0;
    while ((c = getchar()) != '\n')
    {
        s[i] = mygetnum();
        i++;
        if (c == '\n')
        {
            return i;
            break;
        }
    }
}