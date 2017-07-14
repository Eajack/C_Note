// Fibonacci recursion
// 通过算法分析，发现其实 Fibonacci数列其实并不适合用递归啊！
// 因为每次调用求 Fibonacci(num-1) 对 Fibonacci(num-2) 多算了一次，因此递归会霸占更多的内存，
// 程序会变慢，到后面会发现时间复杂度将会呈指数增长。
// 不过题目要求，没办法。。。
// 其实通过分析发现，可以用for用一个buffer数组储存。
// from Eajack <Note>
// 2016.11.17
#include <stdio.h>
int Fibonacci(int num);

int main()
{
	int i,len;
	while(len)
    {
        printf("\nEnter the length of Fibonacci's string you want to get:");
        scanf("%d",&len);
        
        if(len<=0)
        {
            printf("len > 0 !\n");
            printf("\nEnter the length of Fibonacci's string you want to get:");
        }
        else
        {
            for(i=1;i<=len;i++)
            {
                printf("%d\n",Fibonacci(i));
            }
        }
    }
}

int Fibonacci(int num)
{
    if(num<=1)
        return 1;
    else
        return Fibonacci(num-1)+Fibonacci(num-2);
}
