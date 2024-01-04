#include "ex13_myhead.h"

struct tnode *addtree(struct tnode *ptree, char *word){
    struct tnode *p;
    int cmpresult;
    if (ptree == NULL){
        p = talloc();
        p->word = mystrdup(word);
        p->count = 1;
        p->left = p->right = NULL;
        return p;
    }else if ((cmpresult =strcmp(word, ptree->word)) == 0){
        ptree->count++;
    }else if (cmpresult < 0){
        ptree->left = addtree(ptree->left, word);
    }else{
        ptree->right = addtree(ptree->right, word);
    }
    return ptree;
}

void treeprint(struct tnode *ptree){
    if (ptree){
        treeprint(ptree->left);
        printf("%4d %s\n", ptree->count, ptree->word);
        treeprint(ptree->right);
    }
}

struct tnode *talloc(void){
    return (struct tnode *)malloc(sizeof(struct tnode));
}

char *mystrdup(char *s){
    char *p;
    p = (char *)malloc(strlen(s) + 1);
    if (p != NULL){
        strcpy(p, s);
    }
    return p;
}