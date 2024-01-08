#include <stdio.h>
#include <stdlib.h>
#define MAXLEN 100

struct lnode
{
    int data;
    struct lnode *next;
};
void printlist(struct lnode *plist);
void quicksort(struct lnode *plist);
int main(int argc, char *argv[])
{
    struct lnode *plist, *p;
    int n;
    int data[MAXLEN];
    if(argc != 2 || (n=atoi(argv[1])) <= 0)
    {
        printf("Usage: %s n\n", argv[0]);
        return 1;
    }
    //读入n个无序的整形数据
    for(int i=0; i<n; i++)
    {
        scanf("%d", &data[i]);
    }
    //初始化链表
    plist = NULL;
    //将data中的数据逆序插入链表
    while (n > 0)
    {
        p = (struct lnode *)malloc(sizeof(struct lnode));
        p->data = data[n-1];
        p->next = plist;
        plist = p;
        n--;
    }
    printf("Before sort:\n");
    printlist(plist);
    quicksort(plist);
    printf("After sort:\n");
    printlist(plist);
    return 0;
}


void printlist(struct lnode *plist)
{
    struct lnode *p = plist;
    while(p != NULL)
    {
        printf("%3d ", p->data);
        p = p->next;
    }
    printf("\n");
}

void quicksort(struct lnode *plist)
{
    struct lnode *p, *q, *r, *s;
    int temp;
    if(plist == NULL || plist->next == NULL)
    {
        return;
    }
    p = plist;
    q = p->next;
    while(q != NULL)
    {
        if(q->data < p->data)
        {
            temp = q->data;
            q->data = p->data;
            p->data = temp;
        }
        q = q->next;
    }
    quicksort(plist->next);
    r = plist->next;
    s = plist;
    while(r != NULL)
    {
        if(r->data < plist->data)
        {
            temp = r->data;
            r->data = s->data;
            s->data = temp;
        }
        r = r->next;
    }
    quicksort(plist->next);
}
