// strcpy
#include <stdio.h>
#define MAX 100
char *strcpy(char* dest, const char *src);

int main()
{
	char str1[]="C Language is the basic program language in the world.";
	char str2[MAX]=" ";
	printf("Previous:str1:%s\n",str1);
	printf("\t str2:%s(Nothing)\n",str2);
	strcpy(str2,str1);
	printf("Now:str1:%s\n",str1);
	printf("    str2:%s\n",str2);
}

char *strcpy(char* dest, const char *src)
{
	int len1=0,count=0;
	while( *(src+len1)!='\0' )
		len1++;

	while(count<=len1)
	{
		*(dest+count)=*(src+count);
		count++;
	}

	return dest;
}
