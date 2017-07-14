// ReverseList.c
// Perfect Answer!!!Amazing!!!
// The same idea but failed prgrame...shit
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Node
{
    int num;
    struct Node * next;
};
typedef struct Node * Ptr;
Ptr CreateList(int N);
Ptr MirrorList(Ptr List);
void ShowList(Ptr List);

int main()
{
	Ptr b4,now;
	b4=CreateList(10);
	printf("B4:\n");
	ShowList(b4);
	now=MirrorList(b4);
	printf("\n\nNow:\n");
	ShowList(now);
}

Ptr CreateList(int N)
{
	struct Node
	{
	    int num;
	    struct Node * next;
	};
	typedef struct Node * Ptr;

	int i=0;
    Ptr start,pos;
    start=malloc(sizeof(struct Node));

    srand((unsigned) time(NULL));
    for(i=1,pos=start;i<=N;pos=pos->next,i++)
    {
        pos->num=rand()%20;
        if(i!=10)
            pos->next=malloc(sizeof(struct Node));
        else
            pos->next=NULL;
    }

    return start;
}

Ptr MirrorList(Ptr List)
{
	Ptr CurrentPos, NextPos, PreviousPos;
	PreviousPos = NULL;
	CurrentPos = List;
	NextPos = List->next;
	while( NextPos != NULL )
	{
		CurrentPos->next = PreviousPos;
		PreviousPos = CurrentPos;
		CurrentPos = NextPos;
		NextPos = NextPos->next;
	}
	CurrentPos->next = PreviousPos;
	return CurrentPos;
}

void ShowList(Ptr List)
{
	Ptr buffer=List;
	while(buffer!=NULL)
	{
		printf("%d\t%p\n",buffer->num,buffer);
		buffer=buffer->next;
	}
}
