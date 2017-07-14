// 实现strlen
#include <stdio.h>
int strlen(const char * str);

int main()
{
	char str[]="C Language is the basic program language in the world";
	int len=strlen(str);
	printf("The string is %d characters long\n",len);
}

int strlen(const char * str)
{
	unsigned int len;
	while( *(str+len)!='\0' )
		len++;
	return len;
}
