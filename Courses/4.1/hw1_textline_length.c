#include <stdio.h>
#define MAXLINE 1000

int mygetline(char line[], int maxline);
void copy(char from[], char to[], int position);

int main()
{
    int n, j, length;
    char textline[MAXLINE];
    char textline_output[MAXLINE];
    j = 0;

    scanf("%d", &n);
    while ((length = mygetline(textline, MAXLINE)) > 0)
    {
        if (length >= n)
        {
            copy(textline_output, textline, j);
            j = j + length;
        }
    }
    textline_output[j] = '\0';
    printf("\nThe required textlines are:\n%s\n", textline_output);
    return 0;
}

int mygetline(char line[], int lim)
{
    int c, i;
    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        line[i] = c;
    if (c == '\n')
    {
        line[i] = c;
        ++i;
    }
    line[i] = '\0';
    return i;
}

void copy(char to[], char from[], int position)
{
    int i;
    i = 0;
    while ((to[position] = from[i]) != '\0')
    {
        ++i;
        ++position;
    }
}