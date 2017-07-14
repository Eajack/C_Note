#include <stdio.h>

int main()
{
	int space,line,col;
	for(line=1;line<=7;line++)
	{
		for(col=1;col<=(8-line);col++)
			printf("%c ",('A'+col-1) );
		space=( (line==1)?0:(4*line-6) );
		while(space)
		{
			printf(" ");
			space--;
		}
		col=( (line==1)?5:(7-line) );
		for(;col>=0;col--)
            printf("%c ",('A'+col));

		printf("\n");
	}
}
