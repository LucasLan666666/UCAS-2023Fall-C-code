#include <stdio.h>
#include <math.h>
int main()
{
    int num = 1000;
    int isPrimer(int x);
    int j;

    printf("Here are the primers no more than %d:\n", num);
    for (j = 1; j <= num; j++)
    {
        if (isPrimer(j) == 1)
        {
            printf("%d,", j);
        }
    }
    printf("\b.");

    return 0;
}

int isPrimer(int x)
{
    int i;
    int remainder;
    int result;

    if (x != 1)
    {
        for (i = 2, remainder = 1; i <= (sqrt(x)) && remainder != 0; i++)
        {
            remainder = x % i;
        }

        if (remainder != 0)
        {
            result = 1;
        }
        else
        {
            result = 0;
        }
    }
    else
    {
        result = 0;
    }

    return result;
}