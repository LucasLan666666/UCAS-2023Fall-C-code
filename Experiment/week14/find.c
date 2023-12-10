#include <stdio.h>
#include <ctype.h>
#define MAXLINE 1000
int mygetline(char *line, int max);
int strindex(char *source, char *searchfor);

int main(int argc, char *argv[]){
    char line[MAXLINE];
    long lineno = 0;
    int c, except = 0, numForLineDisplay = 0, found = 0, numPattern = 1, numDigit = 0, isDigitBefore = 0;
    while (--argc>0 && (*++argv)[0] == '-')
        while ((c=*++argv[0]))
            if (c == 'x'){
                except = 1;
                if (isDigitBefore == 1)
                    numDigit = 1;
                isDigitBefore = 0;
            }else if (c == 'n'){
                numForLineDisplay = 1;
                if (isDigitBefore == 1)
                    numDigit = 1;
                isDigitBefore = 0;
            }else if ((isdigit(c)) && (numDigit == 0)){
                if (isDigitBefore == 1){
                    numPattern  = numPattern * 10 + (c - '0');
                }else{
                    numPattern = c - '0';
                }
                isDigitBefore = 1;
            }else{
                printf("find: illegal option %c\n", c);
                argc = 0;
                found = -1;
            }
    if (argc!=1)
        printf("Usage: find -x -n -(numForPattern) pattern\n");
    else
        while (mygetline(line, MAXLINE)>0){
            lineno++;
            if ((strindex(line, *argv) >= numPattern)!=except){
                if (numForLineDisplay)
                    printf("%ld: ", lineno);
                printf("%s", line);
                found++;
            }
        }
    return found;
}


int mygetline(char s[], int lim){
    int i, c;
    i = 0;

    while(--lim > 0 && (c = getchar()) != EOF && c != '\n')
        s[i++] = c;
    if(c == '\n')
        s[i++] = '\n';
    s[i] = '\0';
    return i;
}

int strindex(char *source, char *searchfor){
    int i, j, k;
    int numForSearchFor = 0;
    i = 0;
    while (source[i] != '\0'){
        for (j = i, k = 0; (searchfor[k] != '\0') && source[j] == searchfor[k]; j++, k++);
        if (k > 0 && searchfor[k] == '\0'){
            numForSearchFor++;
            i += k-1;
        }
        i++;
    }
    return numForSearchFor;
}