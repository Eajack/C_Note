// strcmp
#include <stdio.h>
int strcmp(const char *s1,const char *s2);

int main()
{
	char str1[]="C Language is the basic program language in the world.";
	char str2[]="C Language is the basic language.";
	int ans=strcmp(str1,str2);
	printf("str1%cstr2\n", (ans==0)?'=':( (ans>0)?'>':'<' ) );
}

int strcmp(const char *s1,const char *s2)
{
	int count=0;
	int len1=0,len2=0,len;

	while( *(s1+len1)!='\0' )
		len1++;
	while( *(s2+len2)!='\0' )
		len2++;
	len=( (len1<len2)?len1:len2 );

	for(count=0;count<=len;count++)
	{
		if( *(s1+count) < *(s2+count) )
			return -1;
		if( *(s1+count) > *(s2+count) )
			return 1;
	}

	return 0;
}
