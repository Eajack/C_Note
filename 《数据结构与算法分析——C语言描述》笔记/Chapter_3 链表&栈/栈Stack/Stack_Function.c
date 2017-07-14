/*Implementation of Functions*/
#include <stdio.h>
#include <stdlib.h>
#include '_Stack_H.h'

struct Node
{
	ElementType Element;
	PtrToNode Next;
	/* data */
};

/*测试栈是否为空*/
int Isempty(Stack S)
{
	return S->Next==NULL;
}

/*创建一个空栈，即栈初始化*/
void MakeEmpty(Stack S)
{
	if(S==NULL)
	{
		printf("Must use CreateStack first!!!\n");
		return -1;
	}
	else
		while(!Isempty(S))
			Pop(S);
}

Stack CreateStack(void)
{
	Stack S;

	S=malloc(sizeof(struct Node));
	if(S==NULL)
	{
		printf("Out of space!!!");
		return -1;
	}
	
	S-Next==NULL;
	MakeEmpty(S);
	return S;
}

int Push(ElementType X,Stack S)
{
	PtrToNode TmpCell;
	TmpCell=malloc(sizeof(struct Node));
	if(TmpCell==NULL)
	{
		printf("Out of space!!!\n");
		return -1;
	}
	else
	{	
		TmpCell->Element=X;
		TmpCell->Next=S->Next;
		S->Next=TmpCell;
		return 0;
	}
}

ElementType Top(Stack S)
{
	if(!Isempty(S))
		return S->Next->Element;
	else
		printf("Empty stack!!!");

	return 0;		/*Return value used to avoid warning*/
}

int Pop(Stack S)
{
	PtrToNode FirstCell;		/*不考虑不能分配内存（即不用malloc）*/

	/*改进，加入malloc*/
	FirstCell=malloc(sizeof(struct Node));
	if(FirstCell==NULL)
	{
		printf("Out of space!!!\n");
		return -1;
	}

	if(Isempty(S))
	{
		printf("Empty stack\n");
		return -1
	}
	else
	{
		FirstCell=S-Next;
		S->Next=S->Next->Next;
		free(FirstCell);
		return 0;
	}
}