#include <stdio.h>
void search(int target,int * array,int len);

int main()
{
	int i,target,array[25];
	for(i=0;i<25;i++)
		array[i]=i+1;

	printf("Input the target number you want to search:");
	scanf("%d",&target);
	search(target,array,25);
}

void search(int target,int * array,int len)
{
	int j=0,count=0;
	for(j=0;j<len;j++)
	{
		if(array[j]==target)
			count++;
	}

	if(count)
		printf("%d appear %d times.",target,count);
	else
		printf("No reserch result!\n");
}
