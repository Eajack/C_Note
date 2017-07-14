// 时间复杂度为O(log N),N为较小数字。
// 迭代次数最多为2log(N)
// 定理：若M>N,则 M mod N < M/2
unsigned int GCD(unsigned int M,unsigned int N)	//M>=N
{
	unsigned int Rem;

	while(N>0)
	{
		Rem=M%N;
		M=N;
		N=Rem;
	}
	return M;
}