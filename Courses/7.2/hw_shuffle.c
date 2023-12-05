#include <stdio.h>
#include <string.h>
#define MAXLEN 100
void shuffle(char s[], int m);

int main(){
    char s[MAXLEN];
    int m;

    printf("Please enter the string and m:\n");
    scanf("%s", s);
    scanf("%d", &m);
    shuffle(s, m);
    printf("%s\n", s);

    return 0;
}

void shuffle(char s[], int m){
    char temp[MAXLEN];
    int len = strlen(s);
    char *pc = temp;
    strcpy(temp, s);
    
    for (int i = len - m; i < len; i++)
        s[i] = *pc++;
    for (int i = 0; i < len - m; i++)
        s[i] = *pc++;
}
