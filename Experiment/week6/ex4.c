#include <stdio.h>
#define N 1000

int isFufilQuantity(int n);

int main()
{
    for (int i = 1; i <= N; i++)
    {
        if (isFufilQuantity(i))
        {
            printf("%d, and factors are:", i);
            for (int j = 1; j < i; j++)
            {
                if (i % j == 0)
                {
                    printf(" %d", j);
                }
            }
            putchar('\n');
        }
    }
    return 0;
}

int isFufilQuantity(int n)
{
    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }

    if (sum == n)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
