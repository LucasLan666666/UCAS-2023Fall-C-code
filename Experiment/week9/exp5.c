#include <stdio.h>
#define MAXLENGTH 32 
int replacePart(int x, int y, int p, int len);
void bin(int n, int nb[]);
int back(int nb[]);

int main(){
    int x, y, p, len;

    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &p);
    scanf("%d", &len);
    printf("%d\n", replacePart(x, y, p, len));
    return 0;
}

// int replacePart(int x, int y, int p, int len){
//     int xc[MAXLENGTH], yc[MAXLENGTH];

//     bin(x, xc);
//     bin(y, yc);

//     for (int i = 0; i < len; i++){
//         xc[p - i] = yc[len - 1 - i];
//     }

//     return back(xc);
// }

int replacePart(int x, int y, int p, int len){
    unsigned int mask = 0;
    mask = (1 << len) - 1;
    y = (y & mask) << (p + 1 - len);
    mask <<= (p + 1 - len);
    x &= ~mask;
    return x | y;
}

void bin(int n, int nb[]){
    unsigned int m;
    m = (unsigned int)n;
    for (int i = 0; i < MAXLENGTH; i++)
        nb[i] = 0;
    for (int i = 0; i < MAXLENGTH; i++){
        nb[i] = m % 2;
        m /= 2;
    }
}

int back(int nb[])
{
    int n, j;
    n = 0;
    j = 1;
    for (int i = 0; i < MAXLENGTH; i++){
        for (int k = 0; k < i; k++)
            j *= 2;
        n = n + nb[i] * j;
        j = 1;
    }
    return n;
}
