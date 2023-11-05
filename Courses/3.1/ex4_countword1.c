
#include <stdio.h>
int main()
{
    int nw;
    int state;
    int c;
    
    state = 0;
    nw = 0;
    while((c = getchar()) != EOF){
        if(c == ' ' || c == '\t' || c == '\n'){
            state = 0;
        }else{
            if(state ==0){
                ++nw;
                state = 1;
            }
        }
    }
    printf("\nThe amount of words is: %d.\n", nw);
    return 0;
}