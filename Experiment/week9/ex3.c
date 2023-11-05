#include <stdio.h>
#define MAXLENGTH 1000
double atof(char s[]);

int main()
{
    int c, i;
    char s[MAXLENGTH];

    for (i = 0; (c = getchar()) != '\n'; i++){
            s[i] = c;
    }
    s[i]='\0';
    printf("%.6le\n", atof(s));
}

double atof(char s[]){
    int sign1, sign2, i, n2;
    double n;
    i = 0;
    n = 0;
    n2 = 0;

    if (s[0] == '+'){
        sign1 = 1;
        i++;
    }else if (s[0] == '-'){
        sign1 = -1;
        i++;
    }else{ 
        sign1 = 1;
    }

    for (; s[i] != '.' && s[i] != 'e' && s[i] != 'E' && s[i] != '\0'; i++)
        n = n * 10.0 + s[i] - '0';

    if (s[i] == '.'){
        i++;
        for (double j = 0.1; s[i] != 'e' && s[i] != 'E' && s[i] != '\0'; i++, j /= 10.0)
            n = n + (s[i] - '0') * j;
    }

    if (s[i] == 'e' || s[i] == 'E'){
        i++;
        if (s[i] == '-')
        {
            sign2 = -1;
            i++;
        }else if (s[i] == '+'){
            sign2 = 1;
            i++;
        }else{
            sign2 = 1;
        }

        for (; s[i] != '\0'; i++)
            n2 = n2 * 10 + s[i] - '0';
        if (sign2 == 1){
            for (int j = 0; j < n2; j++)
                n *= 10;
        }else{
            for (int j = 0; j < n2; j++)
                n /= 10;
        }
    }else{
        ;
    }
    return n;
}
