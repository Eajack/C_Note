// Armstrong number
#include <stdio.h>
#include <math.h>
int main()
{
	int num,unit,dec,hun;
	printf("Enter a number between 1-500:\n");
	scanf("%d",&num);
	hun=num/100;
	dec=(num-hun*100)/10;
	unit=num-hun*100-dec*10;
	if( (int)(pow(hun,3)+pow(dec,3)+pow(unit,3))==num )
		printf("Armstrong number found!!");
	else
		printf("NOT Armstrong number.");
}
