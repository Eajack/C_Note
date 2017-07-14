#include <stdio.h>

void factor(int);
int main()
{
    int num;
    printf("please input a number:");
    scanf("%d",&num);
    factor(num);
    return 0;
}

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
