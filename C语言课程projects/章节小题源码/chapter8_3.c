#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 100
void num_pneo(int * array,int n);

int main()
{
	int i,array[MAX];
	srand( (unsigned) time(NULL) );		//初始随机数种子
	for(i=0;i<MAX;i++)
		array[i]=rand()%101-50;			//生成随机数数组

	num_pneo(array,MAX);
}

void num_pneo(int * array,int n)
{
	int i;
	int pos=0,neg=0,even=0,odd=0;
	for(i=0;i<n;i++)
	{
		if(array[i]>0)
			pos++;
		if(array[i]<0)
			neg++;
		if(array[i]%2)
			even++;
		else
			odd++;
	}

	printf("There are %d postive number.\n",pos);
	printf("There are %d negative number.\n",neg);
	printf("There are %d even number.\n",even);
	printf("There are %d odd number.\n",odd);

}