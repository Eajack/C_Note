#include <stdio.h>

int main()
{
	char ch;
	printf("Enter a character:");
	scanf("%c",&ch);
	if(ch>=65 && ch<=90)
		printf("The character is a capital letter.");
	else if(ch>=97 && ch<=122)
		printf("The character is a small letter.");
	else if(ch>=48 && ch<=57)
		printf("The character is a digit.");
	else
		printf("The charater is a special symbol.");
}
