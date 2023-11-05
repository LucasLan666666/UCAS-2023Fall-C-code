#include <stdio.h>
#define MIN 100
#define MAX 999

int isNarcissistic(int n);

int main()
{
    for (int i = MIN; i <= MAX; i++)
    {
        if (isNarcissistic(i))
        {
            printf("%d ", i);
        }
    }
    putchar('\n');
    return 0;
}

int isNarcissistic(int n)
{
    int a, b, c;

    a = n / 100;
    b = n / 10 % 10;
    c = n % 10;

    if (n == a * a * a + b * b * b + c * c * c)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
