#include <stdio.h>

int main()
{
	int i,j,total;
	int count=0;
	int valid[3];
	float side[3];
	printf("Enter 3 side value of a triangle:\n");
	scanf("%f %f %f",&side[0],&side[1],&side[2]);
	for(i=0;i<=1;i++)
	{
		for(j=i+1;j<=2;j++)
		{
			int k=( (j-i)==1 )? ( (i==0)?2:0 ):1;
			count++;
			if( (side[i]+side[j]) > side[k] )
				valid[count-1]=1;
		}
	}
    total=valid[0]+valid[1]+valid[2];
	if(total==3)
		printf("The triangle is valid!");
	else
		printf("The triangle is not true!");
}
