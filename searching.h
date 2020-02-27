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


