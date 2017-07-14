#include <stdio.h>
#include <math.h>
float sin_spe(int x,int n);

int main()
{
	int count=1,x=1,i;
	float ans;

	do
	{
		ans=sin(x);
		ans=( (float)( (int)( (ans+0.000005)*100000 ) ) )/100000;
		count++;
	}
	while( ans==sin_spe(x,count) );

	printf("The following formula can be up to 5 significant digits:\n",count);
	printf("sin(x)=x");
	for(i=1;i<=count;i++)
	{
		printf("%c\(", ( (i%2)?'-':'+' ) );
		printf("x^%d/%d!\)",2*i+1);
	}
}

float sin_spe(int x,int n)
{
	int j;
	int fac=1;
	float sum=0.0;
	for(j=1;j<=(2*n-1);j++)
	{
		fac*=j;
	}

	for(j=1;j<=n;j++)
	{
		sum+=( pow(-1,j+1)*( pow(x,1)/fac ) );
	}

	sum=( (float)( (int)( (sum+0.000005)*100000 ) ) )/100000;
	return sum;
}
