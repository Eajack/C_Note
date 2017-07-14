// The sum of 5 digits
// no recursion
#include <stdio.h>

int main()
{
	int num,num_1,num_2,num_3,num_4,num_5,sum;
	printf("Input a 5-digit number:\n");
	scanf("%d",&num);
	num_1=num/10000;
	num_2=(num-num_1*10000)/1000;
	num_3=(num-num_1*10000-num_2*1000)/100;
	num_4=(num-num_1*10000-num_2*1000-num_3*100)/10;
	num_5=num-num_1*10000-num_2*1000-num_3*100-num_4*10;
	sum=num_1+num_2+num_3+num_4+num_5;

	printf("The sum of 5 digits is %d",sum);
}