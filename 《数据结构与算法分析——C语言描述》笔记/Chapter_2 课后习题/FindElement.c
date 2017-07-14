// 3.11 寻找链表特定元素
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
struct Node
{
    int num;
    struct Node * next;
};
typedef struct Node * Ptr;
Ptr FindElement(int x,Ptr L);

int main()
{
    int i=0;
    Ptr start,pos;
    start=malloc(sizeof(struct Node));

//    while(i!=10)
//    {
//        pos->num=rand()%20;
//        pos->next=malloc(sizeof(struct Node));
//        pos=pos->next;
//        i++;
//    }

    srand((unsigned) time(NULL));
    for(i=1,pos=start;i<=10;pos=pos->next,i++)
    {
        pos->num=rand()%20;
        if(i!=10)
            pos->next=malloc(sizeof(struct Node));
        else
            pos->next=NULL;
    }

//  Test
    i=1;
    pos=start;
    while(i++<10)
    {
        printf("%d\t%p\n",pos->num,pos);
        pos=pos->next;
    }

    FindElement(5,start);
}

Ptr FindElement(int x,Ptr L)
{
    while(L!=NULL)
    {
        if(L->num==x)
        {
            printf("\nFound!\n");
            printf("%p",L);
            return L;
        }

        else
            L=L->next;
    }

    return 0;
}
