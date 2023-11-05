
#include <stdio.h>
int main()
{
    int state;
    int c;
    int d;
    int i;
    int n;
    int Arr[26];

    state = 0;
    for (n = 0; n <= 25; n++)
    {
        Arr[n] = 0;
    }

    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\t' || c == '\n')
        {
            state = 0;
            putchar(c);
        }
        else
        {
            if (state == 0)
            {
                state = 1;
                if (c >= 97 && c <= 122)
                {
                    d = c - 32;
                    Arr[d - 65] = Arr[d - 65] + 1;
                    putchar(d);
                }
                else
                {
                    Arr[c - 65] = Arr[c - 65] + 1;
                    putchar(c);
                }
            }
            else
            {
                if (c >= 65 && c <= 90)
                {
                    d = c + 32;
                    putchar(d);
                }
                else
                {
                    putchar(c);
                }
            }
        }
    }

    for (i = 1; i <= 26; i++)
    {
        printf("%c:%d\n", i + 64, Arr[i - 1]);
    }
    return 0;
}