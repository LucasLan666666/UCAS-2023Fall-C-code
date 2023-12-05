#include <stdio.h>
double mysqrt(double n);

int main(){
    double a;
    scanf("%lf", &a);
    printf("%lf\n", mysqrt(a));
    return 0;
}

double mysqrt(double a){
    double x1 = 1;
    double x2 = 2;
    while ((x2 - x1) >= 0.00001 || (x1 - x2) >= 0.00001){
        x1 = x2;
        x2 = (x1 + a/x1)/2;
    }
    return x2;
}
