#include<iostream>
using namespace std;

int main(){
    int size,i,j;
    
    cout << "Enter the size of the array : ";
    cin >> size;

    int arr[size];
    cout << "Enter the values in array : " << endl;
    for (i = 0;i < size;i++ ){
        cout << "Enter the element in " << i << " position : ";
        cin >> arr[i];
    }
    cout << "\n *****************  Printing the array  **************\n";
    for(i = 0;i < size ; i++){
        cout << arr[i] << "\t";
    }


    for (i = size;i > 0;i--){
        for(j = 0;j <i-1; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    cout << "\n*******************  Sorted aray by BUBBLE SORT  *******************\n";
    for(i=0;i<size;i++){
        cout << arr[i] << "\t";
    }

}