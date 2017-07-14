#include "function_declaration.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <math.h>
#include <unistd.h>
#include <windows.h>
#include <string.h>

// sort_character
int chapter2_1(void)
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

// grade_rank
int chapter2_2(void)
{
	int hard_grade,tenstr_grade,grade;
	float car_grade;
	printf("Enter the value of hardness,carban content and tentile strength:\n");
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

// sort_triangle
int chapter2_3(void)
{
	int i,j,total;
	int count=0;
	int valid[3];
	float side[3];
	printf("Enter 3 side value of a triangle divided by SPACE key:\n");
	scanf("%f %f %f",&side[0],&side[1],&side[2]);
	for(i=0;i<=1;i++)
	{
		for(j=i+1;j<=2;j++)
		{
			int k=( (j-i)==1 )? ( (i==0)?2:0 ):1;
			count++;
			if( (side[i]+side[j]) > side[k] )
				valid[count-1]=1;
		}
	}
    total=valid[0]+valid[1]+valid[2];
	if(total==3)
		printf("The triangle is valid!");
	else
		printf("The triangle is not true!");
}

// Armstrong number
int chapter3_1(void)
{
	int num,unit,dec,hun;
	printf("Enter a number between 1-500:\n");
	scanf("%d",&num);
	hun=num/100;
	dec=(num-hun*100)/10;
	unit=num-hun*100-dec*10;
	if( (int)(pow(hun,3)+pow(dec,3)+pow(unit,3))==num )
		printf("Armstrong number found!!");
	else
		printf("NOT Armstrong number.");
}

// printf_characters
int chapter3_2(void)
{
	int i=0;
	while(i<=255)
		printf("%c %d\n",i,i++);
	// getchar();
}

// dec2oct.c
int chapter3_3(void)
{
	#define SIZE 8
	int dec,rem,rest;
	int buffer_dec;
	int i=SIZE-1;
	int oct[SIZE];
	printf("Enter a decimal number:\n");
	scanf("%d",&dec);
	buffer_dec=dec;

	do
	{
	    rem=dec/8;
		rest=dec%8;
		oct[i--]=rest;
		dec=rem;
	}
    while( rem!=0 && i>=0 );

    printf("The octal form of %d is ",buffer_dec);
	for(;i>=0;i--)
		oct[i]=0;
	for(i=0;i<SIZE;i++)
        printf("%d",oct[i]);
}

// caculate math formular
int chapter3_4(void)
{
	int i,fac;
	float total=0;
	for(i=1;i<=7;i++)
	{
		if(i==1)
			fac=1;
		else
			fac*=i;
		total+=(1.0/fac);
	}

    printf("(1/1!)+(2/2!)+...+(7/7!)=%f",total);
}

// printf_Permutation
int chapter3_5(void)
{
	int i,j,k;
	printf("The permutation of 1-3 is as following:\n");
	for(i=1;i<=3;i++)
		for(j=1;j<=3;j++)
			for(k=1;k<=3;k++)
            {
                if(i==j || j==k || i==k)
                    continue;
                else
                    printf("%d %d %d\n",i,j,k);
            }
}

// printf_table
int chapter3_6(void)
{
	int y;
	float i,x;
	printf("The connection between x,y&i is:i=2+(y+0.5*x)\n");
	printf("The table of x,y & i:\n");
	printf("x\ty\ti\n");
	for(y=1;y<=6;y++)
		for(x=5.5;x<=12.5;x+=0.5)
			printf("%.2f\t%d\t%.2f\n",x,y,( i=2+(y+0.5*x) ) );
}

// printf_letter-pyramid
int chapter3_7(void)
{
	int space,line,col;
	printf("The letter Pyramid is as following:\n");
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

// 21 matchsticks game
int chapter3_8(void)
{
	// 21 matchsticks game
	// 要保证计算机一定胜利，就要要求最后只有一根而且这个一定是玩家拿的
	// 1、玩家先手
	// 	即21根火柴 先挑一个出来，剩下20根除以4（因为每次最多拿4根），每次只要拿（5-x）根
	// 	x为玩家所拿的根数，即可保证电脑赢
	// 2、电脑先手
	// 	先手必须第一步拿一根，与玩家先手一样的，每次都只是拿（5-x）根即可
	int count=0;
	char start_or_end,first,option;
	// 规则
	printf("------------------------------------------------------------------------\n");
	printf("Hello,I'm an AI.And my name is Eajack. @_@ \n");
	printf("Now Let's play a game!\n");
	printf("This is a matchstick game.");
	printf("The rule is as follow:\n");
	printf("1.There are 21 matchsticks.\n");
	printf("2.The computer will asks the player to pick 1-4 matchsticks.\n");
	printf("3.After you pick,the computer does its picking.\n");
	printf("4.Whoever is forced to pick up the last matchstick loses the game.\n");
	printf("-------------------------------------------------------------------------\n");
	printf("\nBelieve or not! I will absolutely win you!");
	printf("Now Enter your option:\n");
	printf("A.Start\tB.End\n");
	scanf("%c",&start_or_end);
	printf("-------------------------------------------------------------------------\n");
	getchar();

	// 开始游戏
	if( start_or_end=='A')
	{
		option='Y';
		first='A';
        while(option=='Y')
		{
			if(count>0)
			{
				printf("Start!\n");
				printf("A.Start\tB.End\n");
	            printf("Input your choice:");
                getchar();
                scanf("%c",&first);
                printf("\n-------------------------------------------------------------------------\n");
            }

			// 处理输入时有问题情况
	    	if( first!='A' && first!='B' )
	        {
	        	do
	        	{
	        		printf("Error input!Please input again:\n");
	        		printf("-------------------------------------------------------------------------\n");
	        		scanf("%c",&first);
	        	}
	        	while( first=='A' || first=='B' );
	        }

			if(first=='A')
			{
				char buffer;
				char again='Y';
				while(again=='Y')
				{
					// 玩家先走计划
					int rest=21;
					int you=0,me;
					int flag=0;
					printf("You first.How many matchsticks do you want to pick?\n");
					while(rest>0)
					{
					    if(!flag)
                        {
                            printf("Now your turn (Enter your numbers):\n");
                            scanf("%d",&you);
                            printf("-------------------------------------------------------------------------\n");
                        }

						if(you>4)
						{
							do
							{
								printf("You break the rule!");
								printf("Enter again please:\n");
								getchar();
								scanf("%d",&you);
								printf("-------------------------------------------------------------------------\n");
							}
							while(you>4);
							flag=1;
						}

						else
						{
							printf("You pick %d matchstick%c.\n",you,( (you==1)?' ':'s' ) ) ;
							printf("Let me think for a while...\n");
							srand( (int)time(NULL) );
							Sleep( rand()%3000 );
							rest=rest-you;
							if(rest==0)
								printf("Oh!Now I win!\n");
							else
							{
								printf("Oh!I pick %d matchstick%c!\n",(me=5-you),( (me==1)?' ':'s' ) );
								printf("Now there are only %d left!\n",(rest=rest-me) );
								printf("-------------------------------------------------------------------------\n");
							}
							flag=0;
						}
					}

                    count++;
                    printf("Aha!Now I win!\n");
					printf("Continue \"YOU FIRST\" 21 matchsticks game?");
					printf("\nEnter 'Y' to continue or 'N' to go back to the last step.\n");
					getchar();
					scanf("%c",&buffer);
					printf("-------------------------------------------------------------------------\n");

					if(buffer=='Y')
						again=buffer;
					else
					{
						again='N';
						option='Y';
					}
				}
			}

			else
            {
                printf("Game end!You have played %d time%c!\n",count, ( (count==1)?' ':'s' ) );
                printf("-------------------------------------------------------------------------\n");
                return 0;
            }
		}
	}

	else if( start_or_end=='B' )
	{
		printf("Oh!See you!Welcome to challenge me again!\n");
		printf("Game end!You have played %d times!\n",count);
		printf("-------------------------------------------------------------------------\n");
		return 0;
	}

	else
    {
        printf("Error input");
        return 0;
    }
}

// math option
int fact(int num1)
{
	int i,fac=1;
	if(num1<=0)
	{
		printf("Sorry,no factorial for minus numbers & zero.\n\n");
		return 0;
	}

	for(i=1;i<=num1;i++)
		fac*=i;

	printf("The factorial of %d is %d.\n\n",num1,fac);
	return 0;
}

int isprime(int num2)
{
	int m,k;
	k=(int)( sqrt(num2) );  //判断素数，只需要在2-num2的开根号之间判断即可
	if(num2==1)
    {
        printf("%d is not a prime or a composite number.\n\n",num2);
        //1既不是合数，也不是素数
        return 0;
    }

	for(m=2;m<=k;m++)
        if(num2%m==0)
			break;
    if(m>k)
        printf("%d is prime.\n\n",num2);
    else
        printf("%d is not a prime.\n\n",num2);

	return 0;
}

int isodd(int num3)
{
	if(num3/2)
		printf("The number is even.\n\n");
	else
		printf("The number is odd.\n\n");

	return 0;
}

int Exit(int num4)
{
    printf("OK!Exit!\n\n");
    return 0;
}

int chapter4_1(void)
{
	int option,num=0;
	int (*fp[4])(int Num);
    fp[0]=fact;
    fp[1]=isprime;
    fp[2]=isodd;
    fp[3]=Exit;
	printf("Choose a following choice to excute:\n");
	printf("1.Factorial of a number.\n");
	printf("2.Prime or not.\n");
	printf("3.Odd or even.\n");
	printf("4.Exit\n");
	scanf("%d",&option);

	while(option!=4)
	{
	    printf("Enter a number:\n");
		scanf("%d",&num);
		fp[option-1](num);
		printf("Continue?Which option?\n");
		printf("Choose a following choice to excute:\n");
		printf("1.Factorial of a number.\n");
		printf("2.Prime or not.\n");
		printf("3.Odd or even.\n");
		printf("4.Exit\n");
		scanf("%d",&option);
	}
	fp[3](1);
}

// calcute_grade
int chapter4_2(void)
{
	int class,fail_sub,all_sub,grade,get;
	printf("Input the numbers of your class,subjects&failed subjects");
	printf(" with divided space:\n");
	printf("PS:There are class 1,2&3.\n   And the numbers of fail subjects must be less than all subjects.\n");
	scanf("%d %d %d",&class,&all_sub,&fail_sub);

	switch(class)
	{
		case 1:
		{
			grade= (fail_sub>3)? 0:(5*all_sub);
			get=1;
			break;
		}

		case 2:
		{
			grade= (fail_sub>2)? 0:(4*all_sub);
			get=1;
			break;
		}

		case 3:
		{
			grade= (fail_sub>1)? 0:(5*all_sub);
			get=1;
			break;
		}
		default:
		{
			get=0;
			printf("Error!!\n");
		}
	}
	if(get==1)
		printf("Your grade is %d.\n",grade);
	else
		printf("Wrong input!");
}

// factorial
int chapter5_1(void)
{
	int i,num;
	int fac=1;
	printf("Enter an integer:\n");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
		fac*=i;
	printf("The factorial of %d is %d.\n",num,fac);
}

// dec2rom
char * dec2rom(int num)
{
	#define MAX0 50
	int i,j1,j2,k1,k2,m1,m2;
	int unit,dec,hun,tho;
	int hun_up_5,dec_up_5,unit_up_5;
	tho=num/1000;
	hun=(num-tho*1000)/100;
	dec=(num-tho*1000-hun*100)/10;
	unit=num-tho*1000-hun*100-dec*10;

	char * num_rom;
	num_rom=(char *)malloc( MAX0 * sizeof(char) );

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

int chapter5_2(void)
{
	#define MAX 50
	int year;
	printf("Enter a year number you want to transfer it into ROMAN FORM:\n");
	scanf("%d",&year);
	printf("%d is equal to %s in roman form.",year, dec2rom(year) );
}


// factorization
int chapter5_3(void)
{
	int num,i;
	printf("please input a number:\n");
	scanf("%d",&num);
	printf("%d=",num);
	for(i=2;i<=num;i++)
		while(num!=i)
		{
			if(num%i==0)
			{
				printf("%d*",i);
				num=num/i;
			}
			else
				break;
		}
	printf("%d",num);
}

// calculate
void calculate(float num[5])
{
	int i;
	float sum,avg,std_dev;
	float buffer=0;
	sum=num[0]+num[1]+num[2]+num[3]+num[4];
	avg=sum/5.0;
	for(i=0;i<5;i++)
	{
		buffer+=pow((num[i]-avg),2);
	}
	std_dev=pow((buffer/5),0.5);

	printf("The sum,average & standar deviation of the numbers are %.2f %.2f %.2f.\n",sum,avg,std_dev);
}

int chapter5_4(void)
{
	int i;
	float Num[5];
	printf("Input 5 numbers divied by SPACE key:\n");
	for(i=0;i<5;i++)
	{
		scanf("%f",&Num[i]);
	}

	calculate(Num);
}

// output 5 digits(Non-recursion version)
int chapter5_51(void)
{
	// The sum of 5 digits
	// no recursion
	int num,num_1,num_2,num_3,num_4,num_5,sum;
	printf("Input a 5-digit number:(non-recursion versionn)\n");
	scanf("%d",&num);
	num_1=num/10000;
	num_2=(num-num_1*10000)/1000;
	num_3=(num-num_1*10000-num_2*1000)/100;
	num_4=(num-num_1*10000-num_2*1000-num_3*100)/10;
	num_5=num-num_1*10000-num_2*1000-num_3*100-num_4*10;
	sum=num_1+num_2+num_3+num_4+num_5;

	printf("The sum of 5 digits is %d",sum);
}

// output 5 digits(Recursion version)
/*
int sum(int num)
{
    static int sum_digits=0;
	static int count=0;
	static int buffer=0;
	int Num[5]={10000,1000,100,10,1};

    if(count!=5)
	{
	    buffer=num/Num[count];
		sum_digits+=buffer;
		num=num-buffer*Num[count];
		count++;
		return sum(num);
	}
	else
        return sum_digits;
}
*/

int chapter5_52(void)
{
	// the sum of 5 digits of a number
	// recursion
	// The sum of 5 digits
	// no recursion
	int num,num_1,num_2,num_3,num_4,num_5,sum;
	printf("Input a 5-digit number(recursion version):\n");
	scanf("%d",&num);
	num_1=num/10000;
	num_2=(num-num_1*10000)/1000;
	num_3=(num-num_1*10000-num_2*1000)/100;
	num_4=(num-num_1*10000-num_2*1000-num_3*100)/10;
	num_5=num-num_1*10000-num_2*1000-num_3*100-num_4*10;
	sum=num_1+num_2+num_3+num_4+num_5;

	printf("The sum of 5 digits is %d",sum);
}

// factor
void factor(int number)
{
    int i,j,k;
    for (i = 2; i <= number; i++)
    {
        if (number % i == 0)
        {
           j = number / i;
           if (j == 1)
           {
              printf("%d",i);
              return;
           }

           else
           {
             printf("%d * ",i);
             factor(j);
             break;
           }

        }
    }
}

int chapter5_6(void)
{
    int num;
    printf("please input a number:");
    scanf("%d",&num);
    factor(num);
    return 0;
}

// dec2bin.c
void dec2bin1(int dec,char * bin)			//位运算法
{
	int i,buffer;
	int loc=0;
	char * ans;
	buffer=dec;
	static int size=8*sizeof(int);

	for(i=size-1;i>=0;i--,dec>>=1)
		bin[i]=(01&dec) + '0';
	bin[size]='\0';
	while( bin[loc]=='0' )
		loc++;
	ans=bin+loc;
	printf("The decimal number %d is equal to binary string \n%s\n",buffer,ans );
}

/*
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
*/

int chapter5_7(void)
{
	int dec=0;
	char binstr[8*sizeof(int)+1];				//因为int为4byte，即32位，加1用于储存\0
	printf("This is a programe to convert a decimal number to a binary number.\n");
	//printf("Enter %s:\n",(opt=='A')?"an binary number","a decimal number");
	printf("Enter a decimal number:\n");
	scanf("%d",&dec);
	dec2bin1(dec,binstr);
}

// Fibonacci recursion
int Fibonacci(int num)
{
    if(num<=1)
        return 1;
    else
        return Fibonacci(num-1)+Fibonacci(num-2);
}

int chapter5_8(void)
{
	// 通过算法分析，发现其实 Fibonacci数列其实并不适合用递归啊！
	// 因为每次调用求 Fibonacci(num-1) 对 Fibonacci(num-2) 多算了一次，因此递归会霸占更多的内存，
	// 程序会变慢，到后面会发现时间复杂度将会呈指数增长。
	// 不过题目要求，没办法。。。
	// 其实通过分析发现，可以用for用一个buffer数组储存。
	// from Eajack <Note>
	// 2016.11.17
	int i,len,flag;
	char quit='y';
	printf("\nEnter the length of Fibonacci's string you want to get:");
    scanf("%d",&len);
    flag=0;

	while(len && quit!='q')
    {
        if(flag)
        {
            printf("\nEnter the length of Fibonacci's string you want to get:");
            scanf("%d",&len);
        }
        if(len<=0)
        {
            printf("len > 0 !\n");
            printf("\nEnter the length of Fibonacci's string you want to get:('q' to quit)");
            scanf("%d",&len);
        }
        else
        {
            for(i=1;i<=len;i++)
            {
                printf("%d ",Fibonacci(i));
            }
        }

        printf("\nDo you want to quit? Enter 'q' to quit or 'y' to continue:\n");
        getchar();
        scanf("%c",&quit);
        flag=1;
        if(quit=='q')
        {
        	printf("Bye!\n");
        	return 0;
        }
    }
}

// calculate the sum of 25 natural numbers
int SUM(int num)
{
	static int sum_num=0;
	sum_num+=num;
	if(!num)
        return sum_num;
	return ( SUM(--num) );
}

int chapter5_9(void)
{
    int Num=25;
	int Sum=SUM(25);
	printf("1+2+3+4+...+25=%d.",Sum);
}

// caculate the precision of sin()
float sin_spe(int x,int n)
{
	int j;
	int fac=1;
	float sum=0.0;
	for(j=1;j<=(2*n-1);j++)
	{
		fac*=j;
	}

	for(j=1;j<=n;j++)
	{
		sum+=( pow(-1,j+1)*( pow(x,1)/fac ) );
	}

	sum=( (float)( (int)( (sum+0.000005)*100000 ) ) )/100000;
	return sum;
}

int chapter5_10(void)
{
	int count=1,x=1,i;
	float ans;

	do
	{
		ans=sin(x);
		ans=( (float)( (int)( (ans+0.000005)*100000 ) ) )/100000;
		count++;
	}
	while( ans==sin_spe(x,count) );

	printf("The following formula can be up to 5 significant digits:\n");
	printf("sin(x)=x");
	for(i=1;i<=count;i++)
	{
		printf("%c\(", ( (i%2)?'-':'+' ) );
		printf("x^%d/%d!\)",2*i+1,2*i+1);
	}
}

// SHIFT_RIGHT
void shift_right(int * a,int * b,int * c)
{
    int temp1,temp2;
    temp1=*a;
    temp2=*b;
    *a=*c;
    *b=temp1;
    *c=temp2;
}

int chapter5_11(void)
{
	#define SHIFT_RIGHT(a,b,c,t1,t2) ((t1=a),(t2=b),(a=c),(b=t1),(c=t2) )
    int x,y,z;
    // int t1,t2;
    printf("Input 3 integer numbers divided by SPACE key:\n");
    scanf("%d %d %d",&x,&y,&z);
    printf("The orignal is x=%d,y=%d,z=%d\n",x,y,z);
    shift_right(&x,&y,&z);
    printf("Now:x=%d,y=%d,z=%d",x,y,z);
    // SHIFT_RIGHT(x,y,z,t1,t2);
    // printf("Now:x=%d,y=%d,z=%d",x,y,z);
}

// dec22bin.c
/*
void dec2bin12(int dec,char * bin)			//位运算法
{
	int i,buffer;
	buffer=dec;
	static int size=8*sizeof(int);

	for(i=size-1;i>=0;i--,dec>>=1)
		bin[i]=(01&dec) + '0';
	bin[size]='\0';
	printf("The decimal number %d is equal to binary string %s\n",buffer,bin);
}
*/

void bin2dec(char * bin,int dec)
{
	int i,n,buffer;
	int count=strlen(bin);
	dec=0;
	for(i=count-1,n=0;i>=0;i--,n++)
	{
		buffer=(int)( *(bin+i)-'0')*(int)(pow(2,n));
		dec+=buffer;
	}
	printf("The binary string %s is equal to decimal number %d.",bin,dec);
}

int chapter5_12(void)
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
	}
}

// Division algorithm
int gcd(int a,int b)
{
    int x=a,y=b;
    int r;
    while(y!=0)
    {
        r=x%y;
        x=y;
        y=r;
    }

    return x;
}

int chapter5_13(void)
{
	//Division algorithm，or Euclidean algorithm
	//辗转相除法，即欧几里得算法,求最大公因数
	int x,y;
	printf("Input 2 integer numbers:\n");
	scanf("%d %d",&x,&y);
	printf("The largest common factor of %d & %d is %d.",x,y,gcd(x,y));
}

// search _num
void search(int target,int * array,int len)
{
	int j=0,count=0;
	for(j=0;j<len;j++)
	{
		if(array[j]==target)
			count++;
	}

	if(count)
		printf("%d appear %d times.",target,count);
	else
		printf("No reserch result!\n");
}

int chapter8_1(void)
{
	int i,target,array[25];
	printf("Enter 25 numbers separated by Enter key:");
	for(i=0;i<25;i++)
		scanf("%d",&array[i]);

	printf("Input the target number you want to search in the array:");
	scanf("%d",&target);
	search(target,array,25);

	printf("The array is as following:\n");
	for(i=0;i<25;i++)
		printf("%d ",array[i]);
}

// Isprime 1-100
int IsPrime(int num)
{
  int i=2;
  for(;i<=num/2;i++)
    if(0==num%i)
      return 0;
  return 1;
}

int chapter8_2(void)
{
  int num;
  printf("1-100的素数如下\n");
  for(num=2;num<=100;num++)
    if(IsPrime(num))
      printf("%d  ",num);
  printf("\n");
}

// sort_num
void num_pneo(int * array,int n)
{
	int i;
	int pos=0,neg=0,even=0,odd=0;
	for(i=0;i<n;i++)
	{
		if(array[i]>0)
			pos++;
		if(array[i]<0)
			neg++;
		if(array[i]%2)
			even++;
		else
			odd++;
	}

	printf("There are %d postive number.\n",pos);
	printf("There are %d negative number.\n",neg);
	printf("There are %d even number.\n",even);
	printf("There are %d odd number.\n",odd);
}

int chapter8_3(void)
{
	#define MAX1 10
	int i,array[MAX1];
	printf("The programe will produce a random array.\n");
	printf("And then it will caculate the numbers of positive,negative,even and odd numbers.\n");
	srand( (unsigned) time(NULL) );		//初始随机数种子
	for(i=0;i<MAX1;i++)
		array[i]=rand()%101-50;			//生成随机数数组

	num_pneo(array,MAX1);
	printf("The random array is as following:\n");
	for(i=0;i<MAX1;i++)
		printf("%d ",array[i]);
}

// find_largest
int largest(int line,int row,int add[line][row])  //注意&array[0][0]是 (int *)型，下面的 now= *( (add+k)+m )
{
	int k,m;
	int max=add[0][0],now;
	for(k=0;k<line;k++)
		for(m=0;m<row;m++)
        {
            now=add[k][m];
            max= ( ( max>now ) ? max: now );
        }

	printf("\nThe largest is %d",max);
	return max;
}

int chapter8_4(void)
{
	int i,j,array[5][5];
	srand( (unsigned) time(NULL) );
	printf("The programe will produce a random matrix.\n");
	printf("And then it will find the largest number in the random matrix.\n");
	printf("The original array is:\n");
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			array[i][j]=rand()%50-20;
			printf("%4d",array[i][j]);
		}
		printf("\n");
	}

	largest(5,5,array);
}

// matrix_transpose
int chapter8_5(void)
{

	// 输入二维数组
	int i,j,t,array[4][4];
	srand( (unsigned) time(NULL) );
	printf("The programe will produce a random matrix.\n");
	printf("And then it will  transpose the matrix.\n");
	printf("The original array is:\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			array[i][j]=rand()%50-20;
			printf("%4d",array[i][j]);
		}
		printf("\n");
	}

	// 以下是转置
	for(i=0; i<4; i++)
		for(j=i+1; j<4; j++)
		{
			t = array[i][j];
			array[i][j]=array[j][i];
			array[j][i] = t;
		}

	printf("\nNow:\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
			printf("%5d",array[i][j]);
		printf("\n");
	}
}

// search_num
int chapter8_6(void)
{
	int i,array[25],target;
	int count=0;
	printf("Input 25 integer numbers with the loop:\n");
	for(i=0;i<25;i++)
	{
		printf("Enter the %d%s time:",i+1,((i+1)>2)?("th"):( (i+1==1)?("st"):("nd") ) );
		scanf("%d",&array[i]);
		printf("\n");
	}

	printf("Now you want to search:\n");
	scanf("%d",&target);
	for(i=0;i<25;i++)
	{
		if( array[i]==target )
			count+=1;
	}

	if(count)
		printf("%d is in the array %d times.\n",target,count);
	else
		printf("Sorry! %d not found!!\n",target);
}

// bubble sort,selection sort,insert sort 升序
void bubble_sort(int * array,int len)
{
	int swapped=0,i,j,buffer;
	do
	{
		swapped=false;
		for(i=0;i<len;i++)
		{
			for(j=0;j<len-1-i;j++)
			{
				if( array[j] > array[j+1] )
                {
                    buffer=*(array+j+1);
                    *(array+j+1)=*(array+j);
                    *(array+j)=buffer;
                    swapped=true;
                }
			}
		}
	}
	while(swapped);
}

void selection_sort(int * array,int len)
{
	int count=len,i,buffer,min;
	int min_num;
	while(count-1)
	{
		min=array[len-count];
		min_num=len-count;      //注意，经过多次debug后才知道错在这里
		for(i=len-count;i<len;i++)
		{
			if(array[i]<min)
			{
				min=array[i];
				min_num=i;
			}
		}

		buffer=*(array+min_num);
        *(array+min_num)=*(array+len-count);
        *(array+len-count)=buffer;
		count--;
	}
}

void insert_sort(int * array,int len)
{
	int i,j,sort,last_sort,buffer;
	for(i=0;i<len;i++)
	{
		sort=i;
		last_sort=i-1;
		for(j=last_sort;j>=0;j--)
		{
			if( array[sort] < array[j] )
			{
				buffer=*(array+sort);
				*(array+sort)=*(array+j);
				*(array+j)=buffer;
				sort=j;
			}
		}
	}
}

int chapter8_7(void)
{
	#define true 1
	#define false 0
	#define MAX2 10
	int i,array1[MAX2],array2[MAX2],array3[MAX2];
	printf("The programe will produce a random array.\n");
	printf("And then it will  use bubble sort,selection sort,insert sort algorithm \nto sort the array.\n");
	srand( (unsigned) time(NULL) );		//初始随机数种子
	for(i=0;i<MAX2;i++)
	{
		array1[i]=rand()%101-50;			//生成随机数数组
		array2[i]=array1[i];
		array3[i]=array1[i];
	}

    printf("The original:");
    for(i=0;i<MAX2;i++)
    {
        printf("%d ",array1[i]);
    }

    // bubble_sort
    bubble_sort(array1,MAX2);
    printf("\n\nBubble_sort's result:");
	for(i=0;i<MAX2;i++)
	{
		printf("%d ",array1[i]);
	}

    // selection_sort
    selection_sort(array2,MAX2);
    printf("\n\nSelction_sort's result:");
	for(i=0;i<MAX2;i++)
	{
		printf("%d ",array2[i]);
	}

    // insert_sort
    insert_sort(array3,MAX2);
    printf("\n\nInsert_sort's result:");
	for(i=0;i<MAX2;i++)
	{
		printf("%d ",array3[i]);
	}

	printf("\n");
}

// 数字华容道游戏
#define UP 1
#define DOWN 2
#define LEFT 3
#define RIGHT 4
int getkey(void)
{
	int key;
	key=getch();

	if(key=='q')
        return -1;

	if (0==key||0xe0==key)
		key|=getch()<<8;	//非字符键，需要调用2次

	switch(key)                   //上下左右键
	{
		case 0x48E0:
			return UP;
			//break;
		case 0x4be0:
			return LEFT;
			//break;
		case 0x4de0:
			return RIGHT;
			//break;
		case 0x50e0:
			return DOWN;
			//break;
		default:
		{
			printf("Wrong input!\n");
			return 0;
		}
	}
}

void first_table(int * num)
{
	int i,j,k;
	int count=0;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=4;j++)
			printf("----");
		printf("\n");
		for(k=1;k<=4;k++)
		{
            if(i==4 && k==4)
            {
                printf("%3d|",0);
                break;
            }
			printf("%3d|",num[count]);
			count++;
		}
		printf("\n");
	}
	for(i=1;i<=4;i++)
		printf("----");
    printf("\n");
}

void location_zero(int col,int row,int num[col][row],int loc_zero[2])
{
	int i,j;
	int flag=0;
	for(i=0;i<col;i++)
	{
		for(j=0;j<row;j++)
		{
			if(num[i][j]==0)
			{
				loc_zero[0]=i;
				loc_zero[1]=j;
				flag=1;
				break;
			}
		}
		if(flag==1)
			break;
	}
}

void moved_table(int direction_4[4],int now_table[4][4],int *loc_zero,int key)
{
	int swap;
	int i,j,k;
	int loc_up[2]={loc_zero[0]-1,loc_zero[1]};
	int loc_down[2]={loc_zero[0]+1,loc_zero[1]};
	int loc_left[2]={loc_zero[0],loc_zero[1]-1};
	int loc_right[2]={loc_zero[0],loc_zero[1]+1};
	switch(key)
	{
		case 1:
		{
			if(direction_4[0]==1)
			{
				swap=now_table[ loc_down[0] ] [ loc_down[1] ];
				now_table[ loc_down[0] ] [ loc_down[1] ] = now_table[ loc_zero[0] ] [ loc_zero[1] ];
				now_table[ loc_zero[0] ] [ loc_zero[1] ]=swap;
			}
			break;
		}
		case 2:
		{
			if(direction_4[1]==1)
			{
				swap=now_table[ loc_up[0] ] [ loc_up[1] ];
				now_table[ loc_up[0] ] [ loc_up[1] ] = now_table[ loc_zero[0] ] [ loc_zero[1] ];
				now_table[ loc_zero[0] ] [ loc_zero[1] ]=swap;
			}
			break;
		}
		case 3:
		{
			if(direction_4[2]==1)
			{
				swap=now_table[ loc_right[0] ] [ loc_right[1] ];
				now_table[ loc_right[0] ] [ loc_right[1] ] = now_table[ loc_zero[0] ] [ loc_zero[1] ];
				now_table[ loc_zero[0] ] [ loc_zero[1] ]=swap;
			}
			break;
		}
		case 4:
		{
			if(direction_4[3]==1)
			{
				swap=now_table[ loc_left[0] ] [ loc_left[1] ];
				now_table[ loc_left[0] ] [ loc_left[1] ] = now_table[ loc_zero[0] ] [ loc_zero[1] ];
				now_table[ loc_zero[0] ] [ loc_zero[1] ]=swap;
			}
			break;
		}
		default:
        {
            printf("Error\n");
            break;
        }
	}

	printf("\n");
	for(i=0;i<4;i++)
	{
		for(j=1;j<=4;j++)
			printf("----");
		printf("\n");
		for(k=0;k<4;k++)
		{
			printf("%3d|",now_table[i][k]);
		}
		printf("\n");
	}
	for(i=1;i<=4;i++)
		printf("----");
    printf("\n");
}

int chapter8_8(void)
{
    int i,j,k,flag,key,bit;
    int win=0,win1=1,win2=1;
    int num[15]={NULL},num_buffer[15]={NULL},now_table[4][4]={NULL};
    char start,buffer;
    double cost_time1,cost_time2;

	// 游戏界面
	printf("-***************************************************************************-\n");
	printf("This is a double game.\n");
	printf("The rules are as following:\n");
	printf("1.Press direction on your keyborards to move the blocks.\n");
	printf("2.You will win when moving all the blocks in assending order( as folowing ):\n");
	for(i=1;i<=4;i++)
	{
		static int count=1;
		for(j=1;j<=4;j++)
			printf("----");
		printf("\n");
		for(k=1;k<=4;k++)
		{
            if(i==4 && k==4)
            {
                printf("%3d|",0);
                break;
            }
			printf("%3d|",count);
			count++;
		}
		printf("\n");
	}
	for(i=1;i<=4;i++)
		printf("----");
    printf("\n");
    printf("3.The computer will caculate the time you and your rival spend.\n  The one who spend less time will win!\n");
    printf("4.You can press 'q' to quit in the game,but if you do you will must lose the game!\n");
    printf("PS:通过键盘方向键来移动数字滑块\n");
    printf("-***************************************************************************-\n");

	//提示是否开始
	printf("If you (PLAYER 1) haved readied,press 'A' to begin.\n");
	scanf("%c",&start);
	while(start!='A')
    {
        printf("Wrong input!Input again:");
        scanf("%c",&buffer);
        if(buffer=='\n')
            scanf("%c",&start);
        else
            start=buffer;
    }
/*	do
	{
        printf("Wrong input!Input again:");
        scanf("%c",&buffer);
        if(buffer=='\n')
            scanf("%c",&start);
        else
            start=buffer;
	}
	while(start!='A');*/
    printf("\nNow start!\n");

    // 预处理，生成随机1-15整数
	srand((unsigned int)time(NULL));
	for(i=0;i<15;i++)
	{
		num[i]=i+1;
	}
	for(j=0;j<10;j++)
	{
		int m=rand()%15;
		int n=rand()%15;
		int k;
		k=num[m];
		num[m]=num[n];
		num[n]=k;
	}

	/*Player 2初始化棋盘*/
	for(i=0;i<15;i++)
		num_buffer[i]=num[i];

	// 生成表格
	first_table(num);

    // 预处理，初始化表格数组now_table
    printf("\n");
	static int index1=0;
	for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
		{
			now_table[i][j]=num[index1];
			index1++;
			if(i==3 && j==3)
                now_table[i][j]=0;
		}
    }

	// 处理游戏
	/**		Player 1	**/
	/* 计时开始 */
	clock_t begin1,finish1;
	begin1=clock();
	/*	过程	*/
	flag=0;

	while(flag==0)
	{
		/*得到0的位置*/
        int loc_zero[2]={0,0};

		/*判断是否已经赢了*/
		static int num1=1;
		flag=0;
		for(i=0;i<4;i++)
			for(j=0;j<4;j++)
				if(num1==now_table[i][j])
					flag+=1;

		if(flag==15)
        {
            printf("You win!\n");
            break;
        }
		// 还没有赢
		else
		{
			location_zero(4,4,now_table,loc_zero);	//定位0
			// 对0位置分析
			int direction_4[4]={0,0,0,0};			//四个方向的bool,第1,2,3,4位分别为上、下、左、右
			if( loc_zero[0]+1<4 )
				direction_4[0]=1;
			if( loc_zero[0]+1>1 )
				direction_4[1]=1;
			if( loc_zero[1]+1<4)
				direction_4[2]=1;
			if( loc_zero[1]+1>1 )
				direction_4[3]=1;

			do
			{
				printf("Enter your direction key or 'q' to quit:");
				key=getkey();
			}
			while(key==0);

            if(key==-1)
            {
                printf("Bye!\n");
                win1=0;
                break;
            }
			moved_table(direction_4,* now_table,loc_zero,key);
			// void moved_table(int now_table[4][4],int *loc_zero,int key)
			flag=0;
		}
	}
	/*结束并计时*/
	finish1=clock();
	cost_time1=(double)(finish1-begin1);
	cost_time1=(double)(finish1-begin1) / CLOCKS_PER_SEC; 	//输出单位为妙，精确到毫秒级
	cost_time1=(double)(cost_time1/60);
	printf("Player 1 spend %.2f minutes.\n",cost_time1);

	//提示是否开始
	printf("\nIf you (PLAYER 2) haved readied,press 'A' to begin.\n");
	scanf("%d",&buffer);
	scanf("%c",&start);
	while(start!='A')
    {
        printf("Wrong input!Input again:");
        scanf("%c",&buffer);
        if(buffer=='\n')
            scanf("%c",&start);
        else
            start=buffer;
    }
    printf("\nNow start!\n");

    // 生成表格
	first_table(num);

    // 预处理，初始化表格数组now_table
    printf("\n");
	static int index2=0;
	for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
		{
			now_table[i][j]=num[index2];
			index2++;
			if(i==3 && j==3)
                now_table[i][j]=0;
		}
    }

	/**		Player 2	**/
	/* 计时开始 */
	clock_t begin2,finish2;
	begin2=clock();
	/*	过程	*/
	flag=0;

	while(flag==0)
	{
		/*得到0的位置*/
        int loc_zero[2]={0,0};

		/*判断是否已经赢了*/
		static int num2=1;
		flag=0;
		for(i=0;i<4;i++)
			for(j=0;j<4;j++)
				if(num2==now_table[i][j])
					flag+=1;

		if(flag==15)
        {
            printf("You win!\n");
            break;
        }
		// 还没有赢
		else
		{
			location_zero(4,4,now_table,loc_zero);	//定位0
			// 对0位置分析
			int direction_4[4]={0,0,0,0};			//四个方向的bool,第1,2,3,4位分别为上、下、左、右
			if( loc_zero[0]+1<4 )
				direction_4[0]=1;
			if( loc_zero[0]+1>1 )
				direction_4[1]=1;
			if( loc_zero[1]+1<4)
				direction_4[2]=1;
			if( loc_zero[1]+1>1 )
				direction_4[3]=1;

			do
			{
				printf("Enter your direction key or 'q' to quit:");
				key=getkey();
			}
			while(key==0);

            if(key==-1)
            {
                printf("Bye!\n");
                win2=0;
                break;
            }
			moved_table(direction_4,* now_table,loc_zero,key);
			// void moved_table(int now_table[4][4],int *loc_zero,int key)
			flag=0;
		}
	}
	/*结束并计时*/
	finish2=clock();
	cost_time2=(double)(finish2-begin2);
	cost_time2=(double)(finish2-begin2) / CLOCKS_PER_SEC; 	//输出单位为妙，精确到毫秒级
	cost_time2=(double)(cost_time1/60);
	printf("Player 2 spend %.2f minutes.\n",cost_time2);

	//比较输赢
	if(win1==0 && win2==0)
	{
		printf("A draw!!(平手)");
		return 0;
	}
	else if(win1==0 && win2==1)
	{
		printf("Player 2 win the game!\n");
		return 0;
	}
	else if(win1==1 && win2==0)
	{
		printf("Player 1 win the game!");
		return 0;
	}
	else
	{
		win=( (cost_time1>cost_time2)?2:1 );
		printf("Player %d win the game!",win);
	}
}


// 实现STRLEN
#define LEN_MAX 1000
int STRLEN(const char * str)
{
	unsigned int len;
	while( *(str+len)!='\0' )
		len++;
	return len;
}

int chapter9_1(void)
{
	printf("You can input a charater string.\n");
	char str[LEN_MAX];
	gets(str);
	int len=STRLEN(str);
	printf("The string is %d characters long\n",len);
}

// STRCMP
int STRCMP(const char *s1,const char *s2)
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

int chapter9_2(void)
{
	char str1[LEN_MAX],str2[LEN_MAX];
	printf("You can input a character string 1.\n");
	gets(str1);
	printf("Now You can input a character string 2.\n");
	gets(str2);

	int ans=STRCMP(str1,str2);
	printf("str1%cstr2\n", (ans==0)?'=':( (ans>0)?'>':'<' ) );
}

// STRCPY
char *STRCPY(char* dest, const char *src)
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

int chapter9_3(void)
{
	#define MAX4 100
	char str1[LEN_MAX];
	char str2[MAX4]=" ";
	printf("You can input a character string 1.\n");
	gets(str1);
	printf("Previous:str1:%s\n",str1);
	printf("\t str2:%s(Nothing)\n",str2);
	STRCPY(str2,str1);
	printf("Now:str1:%s\n",str1);
	printf("    str2:%s\n",str2);
}

// strcat
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

int chapter9_4(void)
{
	char str1[LEN_MAX],str2[LEN_MAX];
	printf("You can input a character string 1.\n");
	gets(str1);
	printf("Now you can input a character string 2.\n");
	gets(str2);
	printf("Previous:%s\n",str1);
	strcat(str1,str2);
	printf("Now:%s\n",str1);
}

int chapter9_5(void)
{
    char const string[LEN_MAX];
    int pos[10]={1,10,100,1000,10000,100000,1000000,10000000,100000000,1000000000};
    int value=0,len;
    char* pstr;
    pstr=&string;
    printf("Enter a digital string:");
    scanf("%s",string);
    len=strlen(string);
    if(len>10)
    {
        printf("Sorry!Too large number!");
        return 0;
    }

    while( *pstr !='\0')
    {
        value+=( (*pstr-48)*pos[len-1] );
        pstr++;
        len--;
    }
    printf("The number form of \"%s\" is %d",string,value);
    return value;
}

