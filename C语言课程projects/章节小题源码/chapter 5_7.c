/* dec22bin.c */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void dec2bin1(int dec,char * bin);
void dec2bin2(int dec,char * bin);

int main()
{
	int dec=0;
	char opt;
	char binstr[8*sizeof(int)+1];				//因为int为4byte，即32位，加1用于储存\0
	printf("Please choose an option:\n");
	printf("(A)convert binary to decimal.\t(B)convert decimal to binary.\n");
	scanf("%c",&opt);
	//printf("Enter %s:\n",(opt=='A')?"an binary number","a decimal number");
	if(opt=='A')
	{
		printf("Enter an binary number:(up to 32 digits)\n");
		scanf("%s",binstr);
		bin2dec(binstr,dec);
	}
	else
	{
		printf("Enter a decimal number:\n");
		scanf("%d",&dec);
		dec2bin1(dec,binstr);
		dec2bin2(dec,binstr);
	}
}

void dec2bin1(int dec,char * bin)			//位运算法
{
	int i,buffer;
	buffer=dec;
	static int size=8*sizeof(int);

	for(i=size-1;i>=0;i--,dec>>=1)
		bin[i]=(01&dec) + '0';
	bin[size]='\0';
	printf("The decimal number %d is equal to binary string %s\n",buffer,bin);
}

void dec2bin2(int dec,char * bin)			//除2法
{
	int rest,rem;
	int size=8*sizeof(int);
	while((rest=dec%2)>=1)
	{
		rem=dec%2;
		*(bin+size-1)=rem;
		dec=rest;
		size--;
	}
	printf("The decimal number %d is equal to binary string %s\n",dec,bin);
}
