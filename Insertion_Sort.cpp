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

    //                  Insertion Sort
    for(i=0;i<size;i++){
        for(j=i;j>=1;j--){
            if(arr[j-1] > arr[j]){
                int temp = arr[j-1];
                arr[j-1] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
    cout << "\n*******************  Sorted aray by INSERTION SORT  *******************\n";
    for(i=0;i<size;i++){
        cout << arr[i] << "\t";
    }

}