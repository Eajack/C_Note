#include <stdio.h>
#include <stdbool.h>

int main()
{
	int hard_grade,tenstr_grade,grade;
	float car_grade;
	printf("Enter the value of hardness,carban cntent and tentile strength:\n");
	scanf("%d %f %d",&hard_grade,&car_grade,&tenstr_grade);
	bool get_hard=(hard_grade>=50);
	bool get_car=(car_grade<=0.7);
	bool get_ten=(tenstr_grade>=5600);

	if(get_hard && get_car && get_ten)
		printf("The grade is %d",grade=10);
	else if ( (get_hard && get_car) && !get_ten)
		printf("The grade is %d",grade=9);
	else if( (get_ten && get_car) && !get_hard)
		printf("The grade is %d",grade=8);
	else if( (get_hard && get_ten) && !get_car)
		printf("The grade is %d",grade=7);
	else if( get_hard+get_ten+get_car==1)
		printf("The grade is %d",grade=6);
	else
		printf("The grade is %d",grade=5);

}
