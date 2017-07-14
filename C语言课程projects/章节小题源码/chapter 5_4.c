#include <stdio.h>
#include <math.h>

void calculate(float num[5]);

int main()
{
	int i;
	float Num[5];
	printf("Input 5 numbers:\n");
	for(i=0;i<5;i++)
	{
		scanf("%f",&Num[i]);
	}

	calculate(Num);
}

void calculate(float num[5])
{
	int i;
	float sum,avg,std_dev;
	float buffer=0;
	sum=num[0]+num[1]+num[2]+num[3]+num[4];
	avg=sum/5.0;
	for(i=0;i<5;i++)
	{
		buffer+=pow((num[i]-avg),2);
	}
	std_dev=pow((buffer/5),0.5);

	printf("The sum,average & standar deviation of the numbers are %.2f %.2f %.2f.\n",sum,avg,std_dev);
}
