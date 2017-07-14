//目前其实还没完全搞懂，该程序最终单步调试时发现最终 x不等于x
//听说与CPU有关

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	float x=0xffffffff;

	if(x==x)
		printf("Equal\n");
	else
		printf("Not equal\n");

	if(x>=0)
		printf("x(%f) >=0\n",x);
	else
		printf("x(%f) <=0\n",x);

	int a=0xffffffff;
	memcpy(&x,&a,sizeof(x));
	if(x==x)
		printf("Equal\n");
	else
		printf("Not equal\n");

	if(x>=0)
		printf("x(%f) >=0\n",x);
	else if(x<0)
		printf("x(%f) <0\n",x);
	else
		printf("Surprise x(%f)!!!\n",x);
}
