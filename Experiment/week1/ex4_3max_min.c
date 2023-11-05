#include <stdio.h>

int main()
{

    int max_min(int x, int y, int z, int mode);
    int a, b, c, d, e;

    printf("(\"0\" represents for \"max\", while (\"1\" represents for \"min\".)");
    scanf("%d, %d, %d, %d", &a, &b, &c, &d);

    e = max_min(a, b, c, d);

    if (d == 0)
        printf("max = %d\n", e);
    else
        printf("min = %d\n", e);

    return 0;
}

int max_min(int x, int y, int z, int mode)
{
    int p, q;

    if (mode == 0)
    {
        if (x > y)
            p = x;
        else
            p = y;

        if (p > z)
            q = p;
        else
            q = z;
    }
    else
    {
        if (x > y)
            p = y;
        else
            p = x;

        if (p > z)
            q = z;
        else
            q = p;
    }
    return q;
}