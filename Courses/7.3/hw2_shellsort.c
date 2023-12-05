#include <string.h>

void shellsort(char *v[], int len){
    int i, j, gap;
    void swap(char *v[], int i, int j);
    for(gap = len/2; gap > 0; gap /= 2)
        for(i = gap; i < len; i += 1){
            for(j = i - gap; j >= 0 && strcmp(v[j], v[j + gap]) > 0; j -=gap)
                swap(v, j, j + gap);
        }
}

void swap(char *v[], int i, int j){
    char *temp;
    temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}
