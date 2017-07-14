// List_Function.c
/*Place the implemention of the functions*/
#include '_List_H.h'
struct node
{
	ElementType Element;
	Position Next;
};

/*return true if L is empty*/
int IsEmpty(List L)
{
	return L->Next==NULL;
}

/*return true if P is the last position in list L*/
/*parameter L is unused in this implementation*/
int IsLast(Position P,List L)
{
	return P->Next==NULL;
}

/*return the podsition of X in L;Null if not found*/
Position Find(ElementType X,List L)
{
	Position P;
	P=L->Next;
	while(P!=NULL && P->Element!=X)
		P=P->Next;

	return P;
}

/*return the previous position of X;Null if not found X*/
Position FindPrevious(ElementType X,List L)
{
	Position P;
	P=L;		/*Let P=L,for easier to check the next one*/

	while(P->Next!=NULL && P->Next->Element!=X)
		P=P->Next;

	return P;
}

/*
//Another version of FindPrevious(may some mistakes)
Position FindPrevious(ElementType X,List L)
{
	Position P_now,P_next;
	P_now=P->Next;		//Difference:P_now!=L
	P_next=P_now->Next;

	if(P_now->Element==X)
		return P_now;

	else
	{
		while(P_now->Next!=NULL && P_next->Element!=X)
		{
			P_now=P_next;
			P_next=P_next->Next;
		}
	}
}
*/

/*Delete first occurrrence of X from a list*/
/*Assume use of a header node*/
void Delete(ElementType X,List L)
{
	Position P,TmpCell;		/*TmpCell is used for free function*/
	P=FindPrevious(X,L);

	if(!IsLast(P,L))		/*If IsLast(P,L) is true,then X must be NULL*/
	{
		TmpCell=P->Next;
		P->Next=TmpCell->Next;
		free(TmpCell);
	}	
	/*Attention:this is a 'void' function*/
}

/*Insert X after position P*/
void Insert(ElementType X,List L,Position P)
{
	Position TmpCell;

	TmpCell=malloc(sizeof(struct Node));
	if(TmpCell==NULL)
	{
		printf("Out of space");
		return -1;
	}

	TmpCell->Element=X;
	TmpCell->Next=P->Next;
	P->Next=TmpCell;
}