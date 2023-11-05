#include <stdio.h>
int main()
{
    int fahr, celcius;
    int lower, upper, step;
    lower = 0;
    upper = 300;
    step = 20;
    fahr = lower;

    while (fahr <= upper)
    {
        celcius = (fahr - 32) * 5 / 9;
        printf("%d\t%d\n", fahr, celcius);
        fahr = fahr + step;
    }
    return 0;
}