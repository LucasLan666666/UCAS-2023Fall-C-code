#include <stdio.h>
void fun1();

int main(){
    printf("call fun1 1st time\n ");
    fun1();
    printf("call fun1 2nd time\n ");
    fun1();
    printf("call fun1 3rd time\n ");
    fun1();
    return 0;
}

void fun1(){
    int c = 0;
    static int d = 0;
    printf("            c = %d, d = %d\n", c, d);
    c++;
    d++;
}
