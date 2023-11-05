#include <stdio.h>
int main()
{
    int fahr, celcius;
    fahr = 0;

    while(fahr<=300){
        celcius = (fahr - 32) * 5 / 9;
        printf("%d\t%d\n", fahr, celcius);
        fahr = fahr + 20;
    }
    return 0;
}