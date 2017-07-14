#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int fact(int num1);
int isprime(int num2);
int isodd(int num3);
int Exit(int num4);

int main()
{
	int option,num=0;
	int (*fp[4])(int Num);
    fp[0]=fact;
    fp[1]=isprime;
    fp[2]=isodd;
    fp[3]=Exit;
	printf("Choose a following choice to excute:\n");
	printf("1.Factorial of a number.\n");
	printf("2.Prime or not.\n");
	printf("3.Odd or even.\n");
	printf("4.Exit\n");
	scanf("%d",&option);

	while(option!=4)
	{
	    printf("Enter a number:\n");
		scanf("%d",&num);
		fp[option-1](num);
		printf("Continue?Which option?\n");
		printf("Choose a following choice to excute:\n");
		printf("1.Factorial of a number.\n");
		printf("2.Prime or not.\n");
		printf("3.Odd or even.\n");
		printf("4.Exit\n");
		scanf("%d",&option);
	}
	fp[3](1);
}


int fact(int num1)
{
	int i,fac=1;
	if(num1<=0)
	{
		printf("Sorry,no factorial for minus numbers & zero.\n\n");
		return 0;
	}

	for(i=1;i<=num1;i++)
		fac*=i;

	printf("The factorial of %d is %d.\n\n",num1,fac);
	return 0;
}

int isprime(int num2)
{
	int m,k;
	k=(int)( sqrt(num2) );  //判断素数，只需要在2-num2的开根号之间判断即可
	if(num2==1)
    {
        printf("%d is not a prime or a composite number.\n\n",num2);
        //1既不是合数，也不是素数
        return 0;
    }

	for(m=2;m<=k;m++)
        if(num2%m==0)
			break;
    if(m>k)
        printf("%d is prime.\n\n",num2);
    else
        printf("%d is not a prime.\n\n",num2);

	return 0;
}

int isodd(int num3)
{
	if(num3/2)
		printf("The number is even.\n\n");
	else
		printf("The number is odd.\n\n");

	return 0;
}

int Exit(int num4)
{
    printf("OK!Exit!\n\n");
    exit(1);
}
