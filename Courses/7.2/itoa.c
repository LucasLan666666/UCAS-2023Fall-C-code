#include <stdio.h>
#define LEN 100
int i;

int main(){
    void itoa(int x, char s[], int recursive_depth);
    int x, y;
    char s[LEN];
   
    scanf("%d %d", &x, &y);
    itoa(x, s, 0);
    printf("%s\n", s);
    
    itoa(y, s, 0);
    printf("%s\n", s);

    return 0;
}

void itoa(int x, char s[], int recursive_depth){
    static int i;
    if (recursive_depth == 0)
        i = 0;
    if (x < 0){
        s[i++] = '-';
        x = -x;
    }
    if (x/10)
        itoa(x/10, s, ++recursive_depth);
    s[i++] = x%10 + '0';
    s[i] = '\0';
}
