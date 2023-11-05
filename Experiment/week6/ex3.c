#include <stdio.h>
#define MAXLINE 1000
#define MAX 31

int isLegalANSI(char s[]);

int main()
{
    int c, i;
    char s[MAXLINE];
    for (i = 0; (c = getchar()) != EOF && c != '\n'; i++)
    {
        s[i] = c;
    }
    s[i] = '\0';
    printf("%d\n", isLegalANSI(s));
    return 0;
}

int isLegalANSI(char s[])
{

    int length;

    for (int i = 0;; i++)
    {
        if (s[i] == '\0')
        {
            length = i;
            break;
        }
    }
    if (length >= MAX)
    {
        return 0;
    }

    if (s[0] >= 'a' && s[0] <= 'z' || s[0] >= 'A' && s[0] <= 'Z' || s[0] == '_')
    {
        for (int i = 1; s[i] != '\0'; i++)
        {
            if (s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z' || s[0] == '_' || s[i] >= '0' && s[i] <= '9')
            {
            }
            else
            {
                return 0;
            }
        }
        return 1;
    }
    else
    {
        return 0;
    }
}