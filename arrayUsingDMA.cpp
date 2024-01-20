#include<iostream>
using namespace std;
int main(){
	int i;
	int *arr = new int[5];
	for (i=0;i<5;i++){
		cout<<"Enter the element : ";
		cin>>arr[i];
	}
	for(i=0;i<5;i++){
		cout<<arr[i]<<"\t";
	}
	
}
