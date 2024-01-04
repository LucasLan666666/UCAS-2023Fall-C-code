#include <stdio.h>
#define MAXLINE 100
void mygetline(char s[], int lim);
void mygetpattern(char s[], int lim);
int strindex(char s[], char t[]);

int main()
{
    char line[MAXLINE];
    char pattern[MAXLINE];

    mygetline(line, MAXLINE);
    mygetpattern(pattern, MAXLINE);
    printf("%d\n", strindex(line, pattern));
    return 0;
}

void mygetline(char s[], int lim)
{
    int i, c;
    i = 0;
    while (--lim > 0 && (c = getchar()) != EOF && c != '\n')
        s[i++] = c;
    if (c == '\n')
        s[i++] = '\n';
    s[i] = '\0';
}

void mygetpattern(char s[], int lim)
{
    int i, c;
    i = 0;
    while (--lim > 0 && (c = getchar()) != EOF && c != '\n')
        s[i++] = c;
    if (c == '\n')
        s[i++] = '\0';
    s[i] = '\0';
}

int strindex(char s[], char t[])
{
    int i, j, k;
    for (i = 0; s[i] != '\0'; i++)
    {
        j = i;
        k = 0;
        while (t[k] != 0)
        {
            if ((t[k] == '@') && ((s[j] >= 'a' && s[j] <= 'z') || (t[k] >= 'A' && t[k] <= 'Z'))){
                j++;
                k++;
            }else if ((t[k] == '*') && (s[j] >= '0' && s[j] <= '9')){
                j++;
                k++;
            }else if (s[j] == t[k]){
                j++;
                k++;
            }else{
                break;
            }
            }
        if (k > 0 && t[k] == '\0')
            return i;
    }
    return -1;
}
