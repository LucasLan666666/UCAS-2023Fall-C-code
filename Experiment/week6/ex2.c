#include <stdio.h>
#define MAXLINE 999

int mygetline(char line[], int maxline);
void copy(char from[], char to[], int position);

int main()
{
    int length, min1, min2, j, temp, n;
    char textline[MAXLINE], Min1[MAXLINE], Min2[MAXLINE], textline_output[MAXLINE];

    j = 0;

    min1 = mygetline(textline, MAXLINE);
    copy(Min1, textline, j);
    min2 = mygetline(textline, MAXLINE);
    if (min2 <= min1)
    {
        temp = min1;
        min1 = min2;
        min2 = temp;
        copy(Min2, Min1, j);
        copy(Min1, textline, j);
    }
    else
    {
        copy(Min2, textline, j);
    }

    while ((length = mygetline(textline, MAXLINE)) > 0)
    {
        if (length <= min1)
        {
            temp = min1;
            min1 = length;
            min2 = temp;
            copy(Min2, Min1, j);
            copy(Min1, textline, j);
        }
        else if (length <= min2)
        {
            copy(Min2, textline, j);
            min2 = length;
        }
    }

    copy(textline_output, Min1, j);
    j = j + min1;
    copy(textline_output, Min2, j);

    textline_output[min1 + min2] = '\0';
    printf("\n%s", textline_output);

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