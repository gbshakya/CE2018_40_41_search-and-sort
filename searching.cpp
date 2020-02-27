#include <iostream>
#include <math.h>

bool binarySearch(int a[],int n,int targetKey)
{
	int min=0;
	int max=n-1;
	while (min<=max)
	{
		int mid=std::floor((min+max)/2);
		if (targetKey==a[mid])
		{
			return true;	
		}
		else if (targetKey>a[mid])
		{
			min=mid+1;
		}
		else 
		{
			max=mid-1;
		}
	}
	if (min>max)
	{
		return false;
	}
}

int main()
{
	int a[]={1,3,4,7,8};
	int n=sizeof(a)/sizeof(a[0]);
	std::cout<<"Is there 4:"<<binarySearch(a,n,4);
	return 0;
}

