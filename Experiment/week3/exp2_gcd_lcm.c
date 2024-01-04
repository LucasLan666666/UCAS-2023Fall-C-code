#include <stdio.h>
int main()
{
    int m;
    int n;
    int gcd(int x, int y);
    int lcm(int x, int y);

    printf("Please enter m and n:");
    scanf("%d,%d", &m, &n);
    printf("The gcd is %d while the lcm is %d.\n", gcd(m, n), lcm(m, n));

    return 0;
}

int gcd(int x, int y)
{
    int dividend;
    int divisor;
    int remainder;

    if (x >= y)
    {
        dividend = x;
        divisor = y;
    }
    else
    {
        dividend = y;
        divisor = x;
    }

    remainder = dividend % divisor;
    for (; remainder != 0;)
    {
        dividend = divisor;
        divisor = remainder;
        remainder = dividend % divisor;
    }

    return divisor;
}

int lcm(int x, int y)
{
    int lcm;
    lcm = (x * y) / gcd(x, y);
    return lcm;
}