#include <stdio.h>
int main()
{
	int num,i;
	printf("please input a number:\n");
	scanf("%d",&num);
	printf("%d=",num);
	for(i=2;i<=num;i++)
		while(num!=i)
		{
			if(num%i==0)
			{
				printf("%d*",i);
				num=num/i;
			}
			else
				break;
		}
	printf("%d",num);
}