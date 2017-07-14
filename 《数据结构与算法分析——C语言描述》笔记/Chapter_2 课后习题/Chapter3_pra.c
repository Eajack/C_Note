/*Declaration*/
struct Node;
typedef struct Node * PtrToNode;
typedef PtrToNode List;
typedef PtrToNode Position;

struct Node
{
	ElementType Element;
	Position Next;
	/* data */
};


/*Implement*/
// 3.1
void PrintfList(List L)
{
	while(L!=NULL)
	{
		printfElement(L->Element)；
		L=L->Next;
	}
}

// 3.2
PrintLots1(List L,List P)
{
	int Tmp;
	while(P!=NuLL)
	{
		int count=1;
		Position Tmp_L=L;
		Tmp=L->Element;
		while(count!=P->Element)
		{
			Tmp_L=Tmp_L->Next;
			count++;
		}

		printf("%d\t",Tmp_L->Element);
		P=P->Next;
	}
}

// 3.3
// a.
SwapElement_SingleList(List L,int x)
{
	/*默认是x与x+1节点互换元素，以元素为int为例*/
	/*No error check*/
	int left_x=x-1,right_x=x+1;
	Position Tmp1,Tmp2;
	Tmp1=NULL;Tmp2=NULL;
	// Tmp1=malloc(sizeof(struct Node));
	// Tmp2=malloc(sizeof(struct Node));

	if(x==1)
	{
		Tmp1=L;
		Tmp2=L-Next->Next;

		L=L->Next;
		L->Next=Tmp1;
		L->Next->Next=Tmp2;
		// free(Tmp1);
		// free(Tmp2);
	}

	else
	{
		int count=1;
		Position L=L->Next;
		while(count!=left_x)
		{
			L=L->Next;
			count++;
		}

		Tmp1=L;
		Tmp2=L-Next->Next;

		L=L->Next;
		L->Next=Tmp1;
		L->Next->Next=Tmp2;
	}
}

// b.
SwapElement_SingleList(List L,int x)
{
	/*默认是x与x+1节点互换元素，以元素为int为例*/
	/*No error check*/
	int left_x=x-1,right_x=x+1;
	int Node_num=1;
	Position Tmp1,Tmp2,Tmp;
	Tmp1=NULL;Tmp2=NULL,Tmp=L;
	Position Last_L=L;
	// Tmp1=malloc(sizeof(struct Node));
	// Tmp2=malloc(sizeof(struct Node));

	while(Tmp->Next!=L)
	{
		Node_num++;
	}

	int i;
	for(i=1;i<Node_num;i++)
		Last_L=Last_L->Next;

	if(x==1)
	{
		Tmp1=L;
		Tmp2=L-Next->Next;

		L=L->Next;
		L->Next=Tmp1;
		L->Next->Next=Tmp2;
		// free(Tmp1);
		// free(Tmp2);
	}

	else if(x==Node_num)
	{
		L=Last_L;

		Tmp1=L;
		Tmp2=L-Next->Next;

		L=L->Next;
		L->Next=Tmp1;
		L->Next->Next=Tmp2;
	}

	else/*中间节点*/
	{
		int count=1;
		Position L=L->Next;
		while(count!=left_x)
		{
			L=L->Next;
			count++;
		}

		Tmp1=L;
		Tmp2=L-Next->Next;

		L=L->Next;
		L->Next=Tmp1;
		L->Next->Next=Tmp2;
	}
}

// 3.4
List Intersect(List L1,List L2)
{
	List Result;
	Position L1Pos=First(L1),L2Pos=First(L2);
	Result = MakeEmpty( NULL );
	ResultPos = First( Result );

	while(L1!=NULL && L2!=NULL)
	{
		if(L1Pos->Element < L2Pos->Element)
			L1Pos=Next(L1Pos,L);
		else if(L1Pos->Element > L2Pos->Element)
			L2Pos=Next(L2Pos,L);

		else 
		{
			Insert( L1Pos->Element, Result, ResultPos );
			L1 = Next( L1Pos, L1 ); L2 = Next( L2Pos, L2 );
			ResultPos = Next( ResultPos, Result );
		}
	}

	return Result;
}

// 3.5
List Union(List L1,List L2)
{
	List Result;
	Position L1Pos=First(L1),L2Pos=First(L2);
	Result = MakeEmpty( NULL );
	ResultPos = First( Result );

	while ( L1Pos != NULL && L2Pos != NULL ) 
	{
		if( L1Pos->Element < L2Pos->Element ) 
		{
			InsertElement = L1Pos->Element;
			L1Pos = Next( L1Pos, L1 );
		}
		else if( L1Pos->Element > L2Pos->Element ) 
		{
			InsertElement = L2Pos->Element;
			L2Pos = Next( L2Pos, L2 );
		}
		else 
		{
			InsertElement = L1Pos->Element;
			L1Pos = Next( L1Pos, L1 ); L2Pos = Next( L2Pos, L2 );
		}

		Insert( InsertElement, Result, ResultPos );
		ResultPos = Next( ResultPos, Result );
	}

	/* Flush out remaining list */
	while( L1Pos != NULL ) 
	{
		Insert( L1Pos->Element, Result, ResultPos );
		L1Pos = Next( L1Pos, L1 ); ResultPos = Next( ResultPos, Result );
	}
	
	while( L2Pos != NULL ) 
	{
		Insert( L2Pos->Element, Result, ResultPos );
		L2Pos = Next( L2Pos, L2 ); ResultPos = Next( ResultPos, Result );
	}
	
	return Result;
}

// 3.6
struct Node
{
	double coe;
	int pow;
	position next;
	/* data */
};

typedef struct Node * PtrToNode;
typedef PtrToNode poly;
typedef PtrToNode position;
typedef PtrToNode term;

void InsertPoly(poly p,poly header)
{
	header->next=p;
	header->next->coe=p->coe;
	header->next->pow=p->pow;
}

poly AddPoly(poly p1,poly p2)
{
	poly p;
	poly p1pos=p1,p2pos=p2;
	term add_tmp;

	p=malloc(sizeof((M+N)*strcut Node+1));
	poly p_tmp=p;

	if(p==NULL)
	{
		printf("Error distrbuting space!!!");
		return p;
	}

	// 多项式相加
	while(p1pos!=NULL && p2pos!=NULL)
	{
		if(p1pos->pow == p2pos->pow)
		{
			add_tmp->coe=p1pos->coe+p2pos;
			add_tmp->pow=p1pos;

			InsertPoly(add_tmp,p);
			p=p->next;

			p1pos=p1pos->next;
			p2pos=p2pos->next;
		}
		else
		{
			add_tmp=((p1pos->pow > p2pos->pow)?p1pos:p2pos);
			InsertPoly(add_tmp,p);
			p=p->next;

			add_tmp=((p1pos->pow > p2pos->pow)?p2pos:p1pos);
			InsertPoly(add_tmp,p);
			p=p->next;

			p1pos=p1pos->next;
			p2pos=p2pos->next;
		}
	}

	// 多出项补上
	while(p1pos!=NULL)
	{
		InsertPoly(p1pos,p);
		p=p->next;
		p1pos=p1pos->next;
	}

	while(p2pos!=NULL)
	{
		InsertPoly(p2pos,p);
		p=p->next;
		p2pos=p2pos->next;
	}

	// 终止p
	p->next=NULL;

	PrintfPoly(p_tmp);	
}

// 3.12 reverse a list
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