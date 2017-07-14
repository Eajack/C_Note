// Horner Algorithm
// 秦九韶算法，算多项式
#include <stdio.h>
#define MAX 10
int Horner(int N,int X,int *Ai);

int main()
{
	int i,j;
	int A[MAX]={2,1,0,3,4};
	int x=3;
	Horner(MAX,x,A);
}

int Horner(int N,int X,int *Ai)
{
	int poly=0;
	for(i=N;i>=0;i--)
		poly=x*poly+Ai[i];

	printf("The sum is %d",poly);
	return poly;
}