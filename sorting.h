#include<iostream>
using namespace std;

//using selection sorting;
void sort(int a[] ,int n){

	int i,j,k;
	int small;
	
	for(i = 0;i<n;i++){
		small = i;
		for(j = i+1;j<n;j++){
			if(a[j]<a[small]){
				small = j;
			}
		}
		k = a[i];
		a[i] = a[small];
		a[small] = k;
	}
}





	
