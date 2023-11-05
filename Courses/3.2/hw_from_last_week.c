#include <stdio.h>

int main()
{
    int c, nUpper, nLower, nOther, state;

    state = 0;
    nUpper = nLower = nOther = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\t' || c == '\n')
        {
            state = 0;
        }
        else
        {
            if (state == 0)
            {
                if (c >= 'A' && c <= 'Z')
                    ++nUpper;
                else if (c >= 'a' && c <= 'z')
                    ++nLower;
                else
                    ++nOther;
                state = 1;
            }
        }
    }
    printf("\nnUpper = %d, nLower = %d, nOther = %d\n", nUpper, nLower, nOther);
    return 0;
}