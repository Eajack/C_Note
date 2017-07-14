// dec2oct.c
#include <stdio.h>
#define SIZE 8

int main()
{
	int dec,rem,rest;
	int i=SIZE-1;
	int oct[SIZE];
	printf("Enter a decimal number:\n");
	scanf("%d",&dec);

	do
	{
	    rem=dec/8;
		rest=dec%8;
		oct[i--]=rest;
		dec=rem;
	}
    while( rem!=0 && i>=0 );

	for(;i>=0;i--)
		oct[i]=0;
	for(i=0;i<SIZE;i++)
        printf("%d",oct[i]);
}
