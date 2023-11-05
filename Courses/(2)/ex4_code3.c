#include <stdio.h>
int main()
{
    float fahr, celcius;
    int lower, upper, step;
    lower = 0;
    upper = 300;
    step = 20;
    fahr = lower;

    while (fahr <= upper)
    {
        celcius = (fahr - 32) * 5 / 9;
        printf("%3.0f\t%6.1f\n", fahr, celcius);
        fahr = fahr + step;
    }
    return 0;
}