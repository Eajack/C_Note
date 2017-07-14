// _Stack_H.h
#ifndef _Stack_H
struct Node;
typedef struct Node * PtrToNode;
typedef PtrToNode Stack;

int Isempty(Stack S);
Stack CreateStack(void);
// void DisposeStack(void);
void MakeEmpty(Stack S);
int Push(ElementType X,Stack S);	/*新元素进栈操作*/
ElementType Top(Stack S);			/*返回栈顶元素*/
int Pop(Stack S);					/*栈顶元素出栈*/

#endif
