#include <stdio.h>
#define MAXLENGTH 100
void itoh(int x, char s[]);
void reverse(char s[]);

int main()
{
    int x;
    char s[MAXLENGTH];

    scanf("%d", &x);
    itoh(x, s);
    printf("%s\n", s);

    return 0;
}

void itoh(int x, char s[]){
    int i, temp;
    i = 0;

    do{
        temp = x % 16;
        if (temp < 10){
            s[i] = temp + '0';
        }
        else{
            s[i] = temp - 10 + 'a';
        }
        x /= 16;
        i++;
    } while(x != 0);
    s[i++] = 'x';
    s[i++] = '0';
    s[i] = '\0';
    reverse(s);
}

void reverse(char s[]){
    int i;
    char temp;
    i = 0;

    while(s[i] != '\0'){
        i++;
    }
    i--;
    for (int j = 0; j < i; j++, i--){
        temp = s[j];
        s[j] = s[i];
        s[i] = temp;
    }
}
