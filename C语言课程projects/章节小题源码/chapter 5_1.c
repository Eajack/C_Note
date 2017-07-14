#include <stdio.h>

int main()
{
	int i,num;
	int fac=1;
	printf("Enter an integer:\n");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
		fac*=i;
	printf("The factorial of %d is %d.\n",num,fac);
}
