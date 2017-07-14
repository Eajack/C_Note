// strcat
#include <stdio.h>
#define MAX 100
char *strcat(char *dest, const char *src);

int main()
{
	char str1[MAX]="C Language is the basic program ";
	char str2[]="language in the world.";
	printf("Previous:%s\n",str1);
	strcat(str1,str2);
	printf("Now:%s\n",str1);
}

char *strcat(char *dest, const char *src)
{
	int pos_0=0,count=1;
	while( *(dest+pos_0)!='\0' )
		pos_0++;

	*(dest+pos_0)=*(src);
	
	while( *(src+count)!='\0' )
	{
		*(dest+pos_0+count)=*(src+count);
		count++;
	}
	
	*(dest+pos_0+count)='\0';

	return dest;
}