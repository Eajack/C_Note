#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <math.h>
#include <unistd.h>
#include <windows.h>
#include <string.h>
#include "function_declaration.h"

int main(int argc, char* argv[])
{
    int (*chapter2[])(void)={chapter2_1,chapter2_2,chapter2_3};
    int (*chapter3[])(void)={chapter3_1,chapter3_2,chapter3_3,chapter3_4,
                            chapter3_5,chapter3_6,chapter3_7,chapter3_8};
    int (*chapter4[])(void)={chapter4_1,chapter4_2};
    int (*chapter5[])(void)={chapter5_1,chapter5_2,chapter5_3,chapter5_4,chapter5_51,
                             chapter5_52,chapter5_6,chapter5_7,chapter5_8,chapter5_9,
                             chapter5_10,chapter5_11,chapter5_12,chapter5_13};
    int (*chapter8[])(void)={chapter8_1,chapter8_2,chapter8_3,chapter8_4,
                             chapter8_5,chapter8_6,chapter8_7,chapter8_8};
    int (*chapter9[])(void)={chapter9_1,chapter9_2,chapter9_3,chapter9_4,chapter9_5};

    void check_input(char start,char end,char * option2);
    int christ(int argc, char* argv[]);
	// 菜单界面
	int i,j,flag1,flag2,chapter;
	char option1,option2,option3,buffer;
	printf("\n-*********************************************************************-\n");
    printf("loading:\n");
	printf("- EEEEEE      A      JJJJJJJ   A       CCCCCC   K    K    - 20%%\n");
	Sleep(3000);
	printf("- EE         A A        J     A A     C         K  K      - 30%%\n");
	Sleep(1000);
	printf("- EEEEEE    AAAAA       J    AAAAA    C         KK        - 50%%\n");
	Sleep(1000);
	printf("- EE       A     A   J  J   A     A   C         K  K      - 70%%\n");
	printf("- EEEEEE  A       A   JJ   A       A   CCCCCC   K    K    - 100%%!!\n");
    printf("\n\t  Welcome to Eajack's C programe language world.\n");
	printf("-*********************************************************************-\n");
	printf("PS：为了打码方便，所有输出统一(大部分)用英文输出，请老师您谅解。:) ");
	printf("\n    同时，本人已经做完所有布置的代码练习的了。+_+\n");
	printf("-*********************************************************************-\n");

	flag1=1;
	while(flag1==1)
	{
		printf("\n-*********************************************************************-\n");
		printf("Now you can choose option as following to check my C programe homework:\n");
		printf("A.Chapter 2\n");
		printf("B.Chapter 3\n");
		printf("C.Chapter 4\n");
		printf("D.Chapter 5\n");
		printf("E.Chapter 8\n");
		printf("F.Chapter 9\n");
		printf("Enter your option:\n");

		scanf("%c",&option1);
		// 输入检错
		check_input('A','F',&option1);

		printf("\n-*********************************************************************-\n");

		flag2=1;
		switch(option1)
		{
			case 'A':
			{
			    chapter=2;
				while(flag2==1)
				{
				    printf("\n-*********************************************************************-\n");
					printf("Now you can check my chapter 2 homework.\n");
					printf("A.Chapter 2_1.(sort characters)\n");
					printf("B.Chapter 2_2.(caculate grades)\n");
					printf("C.Chapter 2_3.(sort triangles)\n");
					// 检错
					printf("Enter your option:");
					scanf("%c",&option2);
					check_input('A','C',&option2);

					// 调用函数
					getchar();
					printf("\n-*********************************************************************-\n");
					(* chapter2[option2-'A'] )();
	                printf("\n-*********************************************************************-\n");

	                // 询问用户是否要继续看或直接结束
	                printf("Now you can enter your option:\n");
	                printf("A.Check other homework in chapter%d\n",chapter);
	                printf("B.Check other homework in other chapters\n");
	                printf("C.End\n");
	                /*	避免scanf出错	*/
	                buffer=getchar();
	                if(buffer=='\n')
	                	scanf("%c",&option3);
	                else
	                	option3=buffer;

			        /* 输入检错 */
			        check_input('A','C',&option3);
					/*	*/
					switch(option3)
					{
						case 'A':
						{
							// 查本章其他习题
							flag2=1;
							break;
						}
						case 'B':
						{
							// 查其他章
							flag2=0;
							flag1=1;
							break;
						}
						case 'C':
						{
							printf("\n-*********************************************************************-\n");
							printf("Thanks for reveiwing my code.\n");
							printf("Goodbye! Teacher Qin! Wish you will have a happy new year!\n");
							printf("PS:谢谢老师检查我的项目设计。提前预祝老师圣诞节快乐！:)\n");
							printf("Wait please...\n");
							Sleep(2000);
                            printf("Merry Christmas!!\n");
							christ(1,argv);
							printf("\n-*********************************************************************-\n");
							getchar();
							getchar();
							return 0;
						}
						default:
						{
							printf("Error!");
							return 0;
						}
					}
				}

				break;
			}
			case 'B':
			{
				chapter=3;
				while(flag2==1)
			    {
			        printf("\n-*********************************************************************-\n");
    				printf("Now you can check my chapter 3 homework.\n");
    				printf("A.Chapter 3_1.(check if the numbers is Armstrong number between 1-100)\n");
    				printf("B.Chapter 3_2.(printf all ASCII characters)\n");
    				printf("C.Chapter 3_3.(transform decimal numbers to octal numbers)\n");
    				printf("D.Chapter 3_4.(caculate a math formular)\n");
    				printf("E.Chapter 3_5.(print permutations)\n");
    				printf("F.Chapter 3_6.(print a data table)\n");
    				printf("G.Chapter 3_7.(print a digit-pyramid)\n");
    				printf("H.Chapter 3_8.(offer a 21 matchsticks game for user to play)\n");
    				// 检错
    				printf("Enter your option:");
    				scanf("%c",&option2);
    				check_input('A','H',&option2);

    				// 调用函数
    				getchar();
    				printf("\n-*********************************************************************-\n");
    				(* chapter3[option2-'A'] )();
                    printf("\n-*********************************************************************-\n");

                    // 询问用户是否要继续看或直接结束
                    printf("Now you can enter your option:\n");
                    printf("A.Check other homework in chapter%d\n",chapter);
                    printf("B.Check other homework in other chapters\n");
                    printf("C.End\n");

                    /*	避免scanf出错	*/
	                buffer=getchar();
	                if(buffer=='\n')
	                	scanf("%c",&option3);
	                else
	                	option3=buffer;

    		        /* 输入检错 */
    		        check_input('A','C',&option3);
    				/*	*/
    				switch(option3)
    				{
    					case 'A':
    					{
    						// 查本章其他习题
    						flag2=1;
    						break;
    					}
    					case 'B':
    					{
    						// 查其他章
    						flag2=0;
    						flag1=1;
    						break;
    					}
    					case 'C':
    					{
    						printf("\n-*********************************************************************-\n");
    						printf("Thanks for reveiwing my code.\n");
    						printf("Goodbye! Teacher Qin! Wish you will have a happy new year!\n");
    						printf("PS:谢谢老师检查我的项目设计。提前预祝老师圣诞节快乐！:)\n");
    						printf("Wait please...\n");
                            Sleep(2000);
                            printf("Merry Christmas!!\n");
							christ(1,argv);
    						printf("\n-*********************************************************************-\n");
    						getchar();
    						getchar();
    						return 0;
    					}
    					default:
    					{
    						printf("Error!");
    						return 0;
    					}
    				}
    			}

				break;
			}
			case 'C':
			{
				chapter=4;
				while(flag2==1)
				{
				    printf("\n-*********************************************************************-\n");
					printf("Now you can check my chapter 4 homework.\n");
					printf("A.Chapter 4_1.(solve some math problems)\n");
					printf("B.Chapter 4_2.(caculate subjects grades)\n");
					// 检错
					printf("Enter your option:");
					scanf("%c",&option2);
					check_input('A','B',&option2);

					// 调用函数
					getchar();
					printf("\n-*********************************************************************-\n");
					(* chapter4[option2-'A'] )();
	                printf("\n-*********************************************************************-\n");

	                // 询问用户是否要继续看或直接结束
                    printf("Now you can enter your option:\n");
                    printf("A.Check other homework in chapter%d\n",chapter);
                    printf("B.Check other homework in other chapters\n");
                    printf("C.End\n");

                    /*	避免scanf出错	*/
	                buffer=getchar();
	                if(buffer=='\n')
	                	scanf("%c",&option3);
	                else
	                	option3=buffer;

    		        /* 输入检错 */
    		        check_input('A','C',&option3);
    				/*	*/
    				switch(option3)
    				{
    					case 'A':
    					{
    						// 查本章其他习题
    						flag2=1;
    						break;
    					}
    					case 'B':
    					{
    						// 查其他章
    						flag2=0;
    						flag1=1;
    						break;
    					}
    					case 'C':
    					{
    						printf("\n-*********************************************************************-\n");
    						printf("Thanks for reveiwing my code.\n");
    						printf("Goodbye! Teacher Qin! Wish you will have a happy new year!\n");
    						printf("PS:谢谢老师检查我的项目设计。提前预祝老师圣诞节快乐！:)\n");
    						printf("Wait please...\n");
    						Sleep(2000);
    						printf("Merry Christmas!!\n");
							christ(1,argv);
    						printf("\n-*********************************************************************-\n");
    						getchar();
    						getchar();
    						return 0;
    					}
    					default:
    					{
    						printf("Error!");
    						return 0;
    					}
    				}
	            }

				break;
			}
			case 'D':
			{
				chapter=5;
				while(flag2==1)
				{
				    printf("\n-*********************************************************************-\n");
					printf("Now you can check my chapter 5 homework.\n");
					printf("A.Chapter 5_1.(cacalute an integer's factorial ( 阶乘n!) )\n");
					printf("B.Chapter 5_2.(transform decimal numbers to Roman symbols)\n");
					printf("C.Chapter 5_3.(calulate an factorization of an integer number)\n");
					printf("D.Chapter 5_4.(calculate some math data)\n");
					printf("E.Chapter 5_51.(output all digits of a 5-digit number(Non-recursion version) )\n");
					printf("F.Chapter 5_52.(output all digits of a 5-digit number(Recursion version))\n");
					printf("G.Chapter 5_6.(factor an integer number )\n");
					printf("H.Chapter 5_7.(transform decimal numbers to binary numbers)\n");
					printf("I.Chapter 5_8.(output a Fibonacci sequence(斐波那契数列) )\n");
					printf("J.Chapter 5_9.(calculate the sum of 25 natural numbers)\n");
					printf("K.Chapter 5_10.(caculate the precision of function sin() )\n");
					printf("L.Chapter 5_11.(SHIFT_RIGHT a number sequence)\n");
					printf("M.Chapter 5_12.(transform binary numbers to decimal numbers)\n");
					printf("N.Chapter 5_13.\n(use Division algorithm(辗转相除法) \n  to caculate the greatest common factor(最大公因数) )\n");
					// 检错
					printf("Enter your option:");
					scanf("%c",&option2);
					check_input('A','N',&option2);

					// 调用函数
					getchar();
					printf("\n-*********************************************************************-\n");
					(* chapter5[option2-'A'] )();
	                printf("\n-*********************************************************************-\n");

	                // 询问用户是否要继续看或直接结束
                    printf("Now you can enter your option:\n");
                    printf("A.Check other homework in chapter%d\n",chapter);
                    printf("B.Check other homework in other chapters\n");
                    printf("C.End\n");

                    /*	避免scanf出错	*/
	                buffer=getchar();
	                if(buffer=='\n')
	                	scanf("%c",&option3);
	                else
	                	option3=buffer;

    		        /* 输入检错 */
    		        check_input('A','C',&option3);
    				/*	*/
    				switch(option3)
    				{
    					case 'A':
    					{
    						// 查本章其他习题
    						flag2=1;
    						break;
    					}
    					case 'B':
    					{
    						// 查其他章
    						flag2=0;
    						flag1=1;
    						break;
    					}
    					case 'C':
    					{
    						printf("\n-*********************************************************************-\n");
    						printf("Thanks for reveiwing my code.\n");
    						printf("Goodbye! Teacher Qin! Wish you will have a happy new year!\n");
    						printf("PS:谢谢老师检查我的项目设计。提前预祝老师圣诞节快乐！:)\n");
    						printf("Wait please...\n");
    						Sleep(2000);
    						printf("Merry Christmas!!\n");
							christ(1,argv);
    						printf("\n-*********************************************************************-\n");
    						getchar();
    						getchar();
    						return 0;
    					}
    					default:
    					{
    						printf("Error!");
    						return 0;
    					}
    				}
				}

				break;
			}
			case 'E':
			{
				chapter=8;
				while(flag2==1)
				{
				    printf("\n-*********************************************************************-\n");
					printf("Now you can check my chapter 8 homework.\n");
					printf("A.Chapter 8_1.(search a target number in an array)\n");
					printf("B.Chapter 8_2.(output prime number between 1-100 )\n");
					printf("C.Chapter 8_3.(sort numbers )\n");
					printf("D.Chapter 8_4.(find the largest number in a matrix )\n");
					printf("E.Chapter 8_5.(transpose a matrix )\n");
					printf("F.Chapter 8_6.(find a target number )\n");
					printf("G.Chapter 8_7.\n (sort an array \n  by using bubble sort,selection sort and insert sort algorithm )\n");
					printf(" (冒泡排序、选择排序和插入排序算法)\n");
					printf("H.Chapter 8_8.\n  (offer a digit-moving game to play (数字华容道游戏) )\n");
					// 检错
					printf("Enter your option:");
					scanf("%c",&option2);
					check_input('A','H',&option2);

					// 调用函数
					getchar();
					printf("\n-*********************************************************************-\n");
					(* chapter8[option2-'A'] )();
	                printf("\n-*********************************************************************-\n");

	                // 询问用户是否要继续看或直接结束
                    printf("Now you can enter your option:\n");
                    printf("A.Check other homework in chapter%d\n",chapter);
                    printf("B.Check other homework in other chapters\n");
                    printf("C.End\n");

                    /*	避免scanf出错	*/
	                buffer=getchar();
	                if(buffer=='\n')
	                	scanf("%c",&option3);
	                else
	                	option3=buffer;

    		        /* 输入检错 */
    		        check_input('A','C',&option3);
    				/*	*/
    				switch(option3)
    				{
    					case 'A':
    					{
    						// 查本章其他习题
    						flag2=1;
    						break;
    					}
    					case 'B':
    					{
    						// 查其他章
    						flag2=0;
    						flag1=1;
    						break;
    					}
    					case 'C':
    					{
    						printf("\n-*********************************************************************-\n");
    						printf("Thanks for reveiwing my code.\n");
    						printf("Goodbye! Teacher Qin! Wish you will have a happy new year!\n");
    						printf("PS:谢谢老师检查我的项目设计。提前预祝老师圣诞节快乐！:)\n");
    						printf("Wait please...\n");
    						Sleep(2000);
    						printf("Merry Christmas!!\n");
							christ(1,argv);
    						printf("\n-*********************************************************************-\n");
    						getchar();
    						getchar();
    						return 0;
    					}
    					default:
    					{
    						printf("Error!");
    						return 0;
    					}
    				}
				 }

				break;
			}
			case 'F':
			{
				chapter=9;
				while(flag2==1)
				{
				    printf("\n-*********************************************************************-\n");
					printf("Now you can check my chapter 9 homework.\n");
					printf("A.Chapter 9_1.(realize 'strlen' function in <string.h> )\n");
					printf("B.Chapter 9_2.(realize 'strcmp' function in <string.h> )\n");
					printf("C.Chapter 9_3.(realize 'strcpy' function in <string.h> )\n");
					printf("D.Chapter 9_4.(realize 'strcat' function in <string.h> )\n");
					printf("E.Chapter 9_5.(realize 'atoi' function in <stdlib.h> )\n");
					// 检错
					printf("Enter your option:");
					scanf("%c",&option2);
					check_input('A','E',&option2);

					// 调用函数
					getchar();
					printf("\n-*********************************************************************-\n");
					(* chapter9[option2-'A'] )();
	                printf("\n-*********************************************************************-\n");

	                // 询问用户是否要继续看或直接结束
                    printf("Now you can enter your option:\n");
                    printf("A.Check other homework in chapter%d\n",chapter);
                    printf("B.Check other homework in other chapters\n");
                    printf("C.End\n");

                    /*	避免scanf出错	*/
	                buffer=getchar();
	                if(buffer=='\n')
	                	scanf("%c",&option3);
	                else
	                	option3=buffer;

    		        /* 输入检错 */
    		        check_input('A','C',&option3);
    				/*	*/
    				switch(option3)
    				{
    					case 'A':
    					{
    						// 查本章其他习题
    						flag2=1;
    						break;
    					}
    					case 'B':
    					{
    						// 查其他章
    						flag2=0;
    						flag1=1;
    						break;
    					}
    					case 'C':
    					{
    						printf("\n-*********************************************************************-\n");
    						printf("Thanks for reveiwing my code.\n");
    						printf("Goodbye! Teacher Qin! Wish you will have a happy new year!\n");
    						printf("PS:谢谢老师检查我的项目设计。提前预祝老师圣诞节快乐！:)\n");
    						printf("Wait please...\n");
    						Sleep(2000);
    						printf("Merry Christmas!!\n");
							christ(1,argv);
    						printf("\n-*********************************************************************-\n");
    						getchar();
    						getchar();
    						return 0;
    					}
    					default:
    					{
    						printf("Error!");
    						return 0;
    					}
    				}
	            }

				break;
			}
			default:
			{
				printf("Error!");
				return 0;
			}
		}

	}

    return 0;
}

void check_input(char start,char end,char * option2)
{
	char buffer;
	// 输入检错
	while(* option2<start ||* option2>end )
	{
		scanf("%c",&buffer);
		if(buffer=='\n')
		{
			printf("Error!Input angain,please:");
			scanf("%c",option2);
		}
		else
			* option2=buffer;
	}
}

int christ(int argc, char* argv[])
{
    int n = argc > 1 ? atoi(argv[1]) : 4;
    int j,y;
    for (j = 1; j <= n; j++)
    {
        int s = 1 << j, k = (1 << n) - s, x;
        for (y = s - j; y >= 0; y--, putchar('\n'))
        {
            for (x = 0; x < y + k; x++) printf("  ");
            for (x = 0; x + y < s; x++) printf("%c ", '!' ^ y & x);
            for (x = 1; x + y < s; x++) printf("%c ", '!' ^ y & (s - y - x - 1));
        }
    }

    printf("\t\t\t! # ! ! $ \n");
    printf("\t\t\t! ! $ ! $ \n");
    printf("\t\t\t! * ! $ ! \n");
    printf("\t\t\t* ! # ! $ \n");
    printf("\t\t\t! & ! ! $ \n");
    printf("\t\t\t! $ ! * ! \n");
}
