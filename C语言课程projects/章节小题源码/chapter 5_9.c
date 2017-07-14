#include <stdio.h>
int sum(int num);

int main()
{
    int Num=25;
	int Sum=sum(25);
	printf("The sum of first %d natural number is %d.",Num,Sum);
}

int sum(int num)
{
	static int sum_num=0;
	sum_num+=num;
	if(!num)
        return sum_num;
	return ( sum(--num) );
}
