#include<iostream>
using namespace std;
int main(){
	int arr[10] = {1,2,3,4,5};
	int position,value;
	
	cout << "Enter the Position" << endl;
	cin >> position;
	
	cout << "Enter the value to be inserted : ";
	cin >> value;
	cout << endl;
	
	for(int i=4;i>=position;i--){
		arr[i+1] = arr[i];
	}
	arr[position] = value;
	
	for (int i=0;i<=5;i++){
		cout << arr[i] << "\t";
	}
}

