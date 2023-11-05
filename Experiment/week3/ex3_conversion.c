
#include <stdio.h>
int main()
{
    int state;
    int c;
    int d;

    state = 0;

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
                    putchar(d);
                }
                else
                {
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
    return 0;
}