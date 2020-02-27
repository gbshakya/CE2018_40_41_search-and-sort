#include <iostream>
using namespace std;

#include "searching.h"
#include "sorting.h"

int main()
{
	int a[]={7,3,7,2,9,1,6,3};
	int n=sizeof(a)/sizeof(a[0]);
	sort(a,n);
	for (int i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}
	cout<<"Is 2 present in the array?:"<<binarySearch(a,n,2)<<endl;
	cout<<"Is 10 present in the array?:"<<binarySearch(a,n,10)<<endl;
	return 0;
}
