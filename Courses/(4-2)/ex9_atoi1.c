#include <stdio.h>
#define MAXLINE 100

int atoi(char s[]);

int main()
{
    char s[MAXLINE];
    int data;
    scanf("%s", s);
    data = atoi(s);
    printf("%d\n", data);
    return 0;
}

int atoi(char s[])
{
    int i, n;
    n = 0;
    for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
    {
        n = n * 10 + s[i] - '0';
    }
    return n;
}