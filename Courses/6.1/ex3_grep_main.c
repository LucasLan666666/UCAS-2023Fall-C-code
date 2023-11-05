#include <stdio.h> 
#define MAXLINE 100
char pattern[]="ould";
int main(){ 
    char line[MAXLINE];
    while(mygetline(line, MAXLINE)>0)
        if(strindex(line, pattern)>0){
            printf("%s", line);
        }
    return 0;
}

