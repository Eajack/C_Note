#include <stdio.h>
#define SHIFT_RIGHT(a,b,c,t1,t2) ((t1=a),(t2=b),(a=c),(b=t1),(c=t2) )
// 法1：宏函数
void shift_right(int * a,int * b,int *c);
// 法2：普通函数

int main()
{
    int x,y,z;
    // int t1,t2;
    printf("Input 3 integer numbers:\n");
    scanf("%d %d %d",&x,&y,&z);
    printf("The orignal is x=%d,y=%d,z=%d\n",x,y,z);
    shift_right(&x,&y,&z);
    printf("Now:x=%d,y=%d,z=%d",x,y,z);
    // SHIFT_RIGHT(x,y,z,t1,t2);
    // printf("Now:x=%d,y=%d,z=%d",x,y,z);
}

void shift_right(int * a,int * b,int * c)
{
    int temp1,temp2;
    temp1=*a;
    temp2=*b;
    *a=*c;
    *b=temp1;
    *c=temp2;
}
