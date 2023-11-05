#include <stdio.h>
int main()
{
    int uppercase;
    int lowercase;
    int other;
    int state;
    int c;

    state = 0;
    uppercase = 0;
    lowercase = 0;
    other = 0;

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
                if (c >= 65 && c <= 90)
                {
                    uppercase++;
                }
                else if (c >= 96 && c <= 122)
                {
                    lowercase++;
                }
                else
                {
                    other++;
                }
                state = 1;
            }
        }
    }
    printf("\nThe amount of uppercase  words is: %d.\n", uppercase);
    printf("\nThe amount of lowercase words is: %d.\n", lowercase);
    printf("\nThe amount of other words is: %d.\n", other);

    return 0;
}
