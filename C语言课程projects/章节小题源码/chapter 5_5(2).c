// the sum of 5 digits of a number
// recursion
#include <stdio.h>
int sum(int num);

int main()
{
	int num;
	printf("Input a 5-digit number:");
	scanf("%d",&num);
	printf("The sum of 5 digits is %d",sum(num));
}

int sum(int num)
{
    static int sum_digits=0;
	static int count=0;
	static int buffer=0;
	int Num[5]={10000,1000,100,10,1};

    if(count!=5)
	{
	    buffer=num/Num[count];
		sum_digits+=buffer;
		num=num-buffer*Num[count];
		count++;
		return sum(num);
	}
	else
        return sum_digits;
}
