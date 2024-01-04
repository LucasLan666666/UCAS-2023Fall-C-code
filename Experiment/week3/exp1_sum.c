#include <stdio.h>
int main()
{
    int n;
    int i = 0;
    float sum = 1;
    int factorial(int x);

    printf("Please enter the integer: ");
    scanf("%d", &n);

    do
    {
        i++;
        sum = sum + 1.0 / factorial(i);
    } while (i < n);

    printf("The sum is: %.6f", sum);

    return 0;
}

int factorial(int x)
{
    int product = 1;
    int j = 0;

    do
    {
        j++;
        product = product * j;
    } while (j < x);

    return product;
}