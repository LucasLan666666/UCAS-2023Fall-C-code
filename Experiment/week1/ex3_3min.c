#include <stdio.h>

int main()
{

    int min(int x, int y, int z);
    int a, b, c, d;

    scanf("%d, %d, %d", &a, &b, &c);

    d = min(a, b, c);

    printf("min = %d\n", d);

    return 0;
}

int min(int x, int y, int z)
{
    int p, q;

    if (x > y)
        p = y;
    else
        p = x;

    if (p > z)
        q = z;
    else
        q = p;

    return q;
}