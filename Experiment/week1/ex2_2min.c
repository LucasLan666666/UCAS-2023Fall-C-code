#include <stdio.h>

int main()
{

    int min(int x, int y);
    int a, b, c;

    scanf("%d, %d", &a, &b);

    c = min(a, b);

    printf("min = %d\n", c);

    return 0;
}

int min(int x, int y)
{
    int z;

    if (x > y)
        z = y;
    else
        z = x;

    return z;
}