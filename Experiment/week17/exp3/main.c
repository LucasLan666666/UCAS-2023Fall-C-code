#include "myhead.h"
char filebuf[BUFLEN];
int size ;

int main(int argc, char *argv[]){
    struct tnode *ptree;
    char word[MAXWORD];
    int fd;
    if (argc != 2){
        printf("Error: Please enter: ./countwords filename\n");
        return 1;
    }
    if ((fd = open(argv[1], O_RDONLY)) == -1){
        printf("Error: Cannot find file \'%s\'\n", argv[1]);
        return 1;
    }
    size = read(fd, filebuf, BUFLEN);
    close(fd);
    ptree = NULL;
    while (getword(word, MAXWORD) != EOF){
        if (isalpha(word[0])){
            ptree = addtree(ptree, word);
        }
    }
    printf("the results are:\n");
    treeprint(ptree);
}