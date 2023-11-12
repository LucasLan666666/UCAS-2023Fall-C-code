#include <stdio.h>
int main(){
    char s[]="             -456.1231";
    double d;
    double atof(char s[]);
    d=atof(s);
    printf("s=%s\n",s);
    printf("d=%lf\n",d);
}

