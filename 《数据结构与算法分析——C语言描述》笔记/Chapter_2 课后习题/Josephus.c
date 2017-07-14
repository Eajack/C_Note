// 3.10
#include <stdio.h>
#include <stdlib.h>
#define M 1
#define N 5
struct Node
{
    int num;
    struct Node * next;
};
typedef struct Node * Ptr;
Delete(Ptr position,Ptr start);

int main()
{
    int i;
    //初始化链表
    Ptr start,p_now,p_temp;
    start=malloc(sizeof(struct Node));
    p_now=start;

    int count=0;
    while(count<N)
    {
        p_now->num=count;
        if(count!=N-1)
        {
            p_now->next=malloc(sizeof(struct Node));
            //p_now->next=p_temp;
            p_now=p_now->next;
        }
        else
            p_now->next=start;
        count++;
    }

    //Test:
    // p_temp=start;
    // for(i=0;i<N;i++)
    // {
    //    printf("%d %p\n",p_temp->num,p_temp->next);
    //    p_temp=p_temp->next;
    // }


    /*注意未+1*/

    // 约瑟夫求解
    int flag=1;
    Ptr p_b4=start;
    p_now=start;
    // new_begin=start;
    while(p_now!=p_now->next)
    {
        // 找到第M个
        for(i=1;i<=M-1;i++)
            p_b4=p_b4->next;
        p_now=p_b4->next;

        // 删除第M个
        printf("%d\t",p_now->num+1);
        p_b4->next=p_now->next;

        p_b4->next=p_now->next;
        p_b4=p_b4->next;
        p_now=p_b4->next;

        /*flag=0;
        for(i=1,p_temp=start;i<N;p_temp=p_temp->next,i++)
            if(p_temp->num)
                flag++;*/
    }
}
