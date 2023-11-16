#include <stdio.h>
#include <string.h>
#define MAXLEN 10

int main(){
    void itoh(int x, char[]);
    char s[MAXLEN];
    int x;
    scanf("%d", &x);
    itoh(x, s);
    printf("The hexadecimal is %s\n", s);
    return 0;
}

void itoh(int x, char s[]){
    void reverse(char s[]);
    unsigned int k, m;
    int i = 0;
    k = x;
    do{
        m = k & 0xf;
        s[i] = (m < 10)? (m + '0'): (m - 10 + 'A');
        k >>= 4;
        i++;
    }while(k > 0);
    s [i++] = 'X', s[i++] = '0', s[i] = '\0';
    reverse(s);
}

void reverse(char s[]){
    int c, i, j;
    for(i = 0, j = strlen(s) - 1; i < j; i++, j --)
        c = s[i], s[i] = s [j], s[j] = c;
}
