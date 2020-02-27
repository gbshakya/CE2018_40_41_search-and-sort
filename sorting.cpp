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






int main(){
	int a[6] = {8,5,2,9,6,3};
	int n = 6;
	int i;
	
	sort(a,n);
	
	
	
	
	
	/*int i,j,k;
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
				
	
	
	
	}*/
	
	for(i = 0; i<n;i++){
		cout<<a[i]<<endl;
	}	





return 0;
}
