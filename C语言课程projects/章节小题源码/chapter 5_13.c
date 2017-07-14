//Division algorithm，or Euclidean algorithm 
//辗转相除法，即欧几里得算法,求最大公因数
#include <stdio.h>
#include <math.h>
int gcd(int a,int b);

int main()
{
	int x,y;
	printf("Input 2 integer numbers:\n");
	scanf("%d %d",&x,&y);
	gcd(x,y);
}
int gcd(int a,int b)
{
    int x=a,y=b;
    int r;
    while(y!=0)
    {
        r=x%y;
        x=y;
        y=r;
    }
    printf("%d",x);
}