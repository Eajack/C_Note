#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

	// 输入二维数组
	int i,j,t,array[4][4];
	srand( (unsigned) time(NULL) );
	printf("The original array is:\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			array[i][j]=rand()%50-20;
			printf("%4d",array[i][j]);
		}
		printf("\n");
	}

	// 以下是转置
	for(i=0; i<4; i++)
		for(j=i+1; j<4; j++)
		{
			t = array[i][j];
			array[i][j]=array[j][i];
			array[j][i] = t;
		}

	printf("\nNow:\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
			printf("%5d",array[i][j]);
		printf("\n");
	}
}
