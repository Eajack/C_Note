#include <stdio.h>
#define MAX 50
char * dec2rom(int num);

int main()
{
	int year;
	printf("Enter a year number you want to transfer it into ROMAN FORM:\n");
	scanf("%d",&year);
	printf("%d is equal to %s in roman form.",year, dec2rom(year) );
}

char * dec2rom(int num)
{
	int i,j1,j2,k1,k2,m1,m2;
	int unit,dec,hun,tho;
	int hun_up_5,dec_up_5,unit_up_5;
	tho=num/1000;
	hun=(num-tho*1000)/100;
	dec=(num-tho*1000-hun*100)/10;
	unit=num-tho*1000-hun*100-dec*10;

	char * num_rom;
	num_rom=(char *)malloc( MAX * sizeof(char) );

// 打印1000数量级的
	for(i=0;i<tho;i++)
		*(num_rom+i)='m';

// 打印100数量级的
	if(hun>=5)
	{
		hun_up_5=hun/5;
		hun=hun-hun_up_5*5;
		for(j1=i;j1<(i+hun_up_5);j1++)
			*(num_rom+j1)='d';

		for(j2=j1;j2<(j1+hun);j2++)
			*(num_rom+j2)='c';
	}

	else
	{
		for(j2=i;j2<(i+hun);j2++)
			*(num_rom+j2)='c';
	}

// 打印10数量级的
	if(dec>=5)
	{
		dec_up_5=dec/5;
		dec=dec-dec_up_5*5;
		for(k1=j2;k1<(j2+dec_up_5);k1++)
			*(num_rom+k1)='l';

		for(k2=k1;k2<(k1+dec);k2++)
			*(num_rom+k2)='x';
	}

	else
	{
		for(k2=j2;k2<(j2+dec);k2++)
			*(num_rom+k2)='x';
	}

// 打印1数量级的
	if(unit>=5)
	{
		unit_up_5=unit/5;
		unit=unit-unit_up_5*5;
		for(m1=k2;m1<(k2+unit_up_5);m1++)
			*(num_rom+m1)='v';

		for(m2=m1;m2<(m1+unit);m2++)
			*(num_rom+m2)='i';
	}

	else
	{
		for(m2=k2;m2<(k2+unit);m2++)
			*(num_rom+m2)='i';
	}

    *(num_rom+m2)='\0';
	return num_rom;
}
