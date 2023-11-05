
#include <stdio.h>
int main()
{
    int c, nl, nw, nc, state;

    state = 0;
    nl = nw = nc = 0;
    while ((c = getchar()) != EOF)
    {
        ++nc;
        if (c == '\n')
        {
            ++nl;
        }
        if (c == ' ' || c == '\t' || c == '\n')
        {
            state = 0;
        }
        else
        {
            if (state == 0)
            {
                ++nw;
                state = 1;
            }
        }
    }
    printf("\nnl = %d, nw = %d, nc = %d.\n", nl, nw, nc);
    return 0;
}