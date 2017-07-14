/* implementation file */
#include '_Curvor_H.h'
struct Node
{
	ElementType Element;
	Position Next;
	/* data */
};
struct CurvorSpace[ SpaceSize ];	/*SpaceSize为自定空间*/

/*相当于指针链表中的malloc*/
static Position CurvorAlloc(void)
{
	Position P;

	P=CurvorSpace[0].Next;
	CurvorSpace[0].Next=CurvorSpace[P].Next;

	return P;
}

/*相当于指针函数 free*/
static void CurvorFree(Position P)
{
	CurvorSpace[P].Next=CurvorSpace[0].Next;
	CurvorSpace.Next=P;
}

/*

剩下游标操作函数的实现和_List_Function.c里面的差不多
List MakeEmpty(List L);
int Isempty(List L);
int IsLast(Position P,List L);
Position Find(ElementType X,List L);
Position FindPrevious(ElementType X,List L);
void Delete(ElementType X,List L);
void Insert(ElementType X,List L,Position P);
void DeleteList(List L);
Position Header(List L);
Position First(List L);
Position Advance(Position P);
ElementType Retrieve(Position P);

*/