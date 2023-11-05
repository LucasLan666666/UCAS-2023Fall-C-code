#include <stdio.h>
int main()
{
    int calculate(int x, int y);
    int a, b, c;
    a = 10;
    b = 8;
    c = calculate(a, b);
    printf("c = %d\n", c);
    a = 7;
    b = 12;
    c = calculate(a, b);
    printf("c = %d\n", c);
    return 0;
}

int calculate(int x, int y)
{
    int z;
    if (x > y)
        z = x - y;
    else
        z = x * y;
    return z;
}