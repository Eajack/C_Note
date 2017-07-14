#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int largest(int * add,int line,int row);

int main()
{
	int i,j,array[5][5];
	srand( (unsigned) time(NULL) );
	printf("The original array is:\n");
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			array[i][j]=rand()%50-20;
			printf("%4d",array[i][j]);
		}
		printf("\n");
	}

	largest(&array[0][0],5,5);
}

int largest(int * add,int line,int row)  //注意&array[0][0]是 (int *)型，下面的 now= *( (add+k)+m )
{
	int k,m;
	int max=0,now;
	for(k=0;k<line;k++)
		for(m=0;m<row;m++)
        {
            now= *( (add+k)+m );
            max= ( ( max>now ) ? max: now );
        }

	printf("\nThe largest is %d",max);
	return max;
}
