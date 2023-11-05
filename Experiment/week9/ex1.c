#include <stdio.h>
#define MAXLENGTH 1000

int main(){
    int n;
    int s[MAXLENGTH];
    scanf("%d", &n);

    for (int i = 1; i <= n; i++){
        if (i == 1){
            printf("1\n");
        }else{
            for (int j = i - 1; j >= 0; j--){
                if (j == i - 1){
                    s[j] = 1;
                    printf("%d ", s[j]);
                }else if (j > 0 && j < i - 1){
                    s[j] = s[j - 1] + s[j];
                    printf("%d ", s[j]);
                }else{
                    s[j] = 1;
                    printf("%d\n", s[j]);
                }           
            }
        }
    }

    return 0;
}