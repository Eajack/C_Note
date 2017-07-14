//定义多项式组成
typedef struct 
{
	int CoeffArray[MaxDegree+1];
	int HighPower;
} * Polynominal;


//多项式初始化为0的操作
void ZeroPolynominal(Polynominal Poly)
{
	int i;

	/*系数全部变为0*/
	for(i=0;i<=MaxDegree;i++)
	{
		Poly->CoeffArray[i]=0;
	}

	/*最高阶为0*/
	Poly->HighPower=0;
}


//多项式相加操作
void AddPolynominal(const Polynominal P1,const Polynominal P2,Polynominal Psum)
{
	int i;

	ZeroPolynominal(Psum);
	Psum->HighPower=( P1->HighPower > P2->HighPower ?(P1->HighPower):(P2->HighPower) );

	for(i=0;i<=Psum->HighPower;i++)
		Psum->CoeffArray[i]=P1->CoeffArray[i]+P2->CoeffArray[i];
}


//多项式乘法操作
void MultPolynominal(const Polynominal P1,const Polynominal P2,Polynominal Pmult)
{
	int i,j;

	ZeroPolynominal(Pmult);
	Psum->HighPower=P1->HighPower+P2->HighPower;

	if(Psum->HighPower > MaxDegree)		/* 容易忽视的地方*/
	{
		printf("Exceed size!");
		return -1;		
	}
	else
	{
		for(i=0;i<=P1->HighPower;i++)
			for(j=0;j<P2->HighPower;j++)
				Psum->CoeffArray[i+j]+=P1->CoeffArray[i] * P2->CoeffArray[j];
				/*  多项式乘法：分分配律乘法 */
	}
}
