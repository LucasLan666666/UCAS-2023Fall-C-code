#include <stdio.h>
#define MAXLEN 15
int main(){
    void itoa(int n, char s[]);
    int num;
    int r;
    char s[MAXLEN];
    while ((r = scanf("%d", &num)) != EOF){
        if (r){
            itoa(num, s);
            printf("%s\n", s);
        }
        else{
            printf("Your input is invalid.\n");
            while((r = getchar()) != EOF && r != '\n')
                ;
        }  
    }
    return 0;
}

void itoa(int n, char s[]){
    static int i = 0;
    static int j = 0;

    if (n < 0){
        s[i++] = '-';
        j++;
        n = -n;
    }
    if (n / 10){
        j++;
        itoa(n / 10, s);
    }
    s[i++] = n % 10 + '0';
    if (i > j){
        s[i] = '\0';
        i = j = 0;
    }
}