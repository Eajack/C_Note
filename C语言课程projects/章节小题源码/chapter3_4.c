#include <stdio.h>

int main()
{
	int i,fac;
	float total=0;
	for(i=1;i<=7;i++)
	{
		if(i==1)
			fac=1;
		else
			fac*=i;
		total+=(1.0/fac);
	}

    printf("(1/1!)+(2/2!)+...+(7/7!)=%f",total);

}
