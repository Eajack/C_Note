#include <stdio.h>

int main()
{
	int y;
	float i,x;
	printf("The table of x,y & i:\n");
	printf("x\ty\ti\n");
	for(y=1;y<=6;y++)
		for(x=5.5;x<=12.5;x+=0.5)
			printf("%.2f\t%d\t%.2f\n",x,y,( i=2+(y+0.5*x) ) );
}
