#include<stdio.h>
//									INSERTION SORT
int main(){
	
	printf("\t \t \t Insertion Sort \n \n");
	int i,key,j;
	int arr[] = {45,75,94,12,31,56,11,64};
	
	for(i=1;i<8;i++){
		key = arr[i];
		j = i-1;
		while(j>=0 && arr[j]>key){
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = key;
	}
	for(i=0;i<8;i++){
		printf("%d \t",arr[i]);
	}
}
