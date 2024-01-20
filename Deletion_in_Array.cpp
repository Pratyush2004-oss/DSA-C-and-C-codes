#include<iostream>
using namespace std;

int main(){
	int arr[50],i,n,pos;
	
	cout << "Enter the number of element of the Array : ";
	cin >> n;
	
	for(int i=0;i<n;i++){
		cout << "Enter the element in " << i << " poition : ";
		cin >> arr[i];
	}
	
	for(int i=0;i<n;i++){
		cout << arr[i] << "\t";
	}
	
	cout << "\nEnter the position of element you want to delete : ";
	cin >> pos;
	
	for(i=pos;i<n;i++){
		arr[i] = arr[i+1];	
	}
	
	for(int i=0;i<n-1;i++){
		cout << arr[i] << "\t";
	}
	
	int value,count=0;
	cout << "\nEnter the value to be Searched : ";
	cin >> value;
	
	
	for (i=0;i<n;i++){
		if(arr[i]=value){
			count++;
		}
		else{
			count=-1;
		}
	}
	
	if(count!=-1){
		cout<< value << " Element found at index : " << count;
	}
	else{
		cout << "element not found";
	}
	
}
