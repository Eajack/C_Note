//时间复杂度：O(log N),N为数组元素个数。
// 运行时间最长为 [log(N-1)]+2(这里[]为顶函数，向上取整)
int BinarySearch(const int target_array[],int target_number,int N)
{
	int low,high,mid;
	low=0;high=N-1;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(A[mid]<target_number)
			low=mid+1;
		else if(A[mid]>target_number)
			high=mid-1;
		else
			return mid;
	}

	return -1;
}
