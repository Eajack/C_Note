// Cursor List
// _Cursor_H.h
#ifndef _Cursor_H
typedef int PtrToNode;
typedef PtrToNode List;
typedef PtrToNode Position;

void InitializeCursorSpace(void);

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

#endif		/*_Cursor_H*/