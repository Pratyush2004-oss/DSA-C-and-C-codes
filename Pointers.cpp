#include<stdio.h>
#include<stdlib.h>
struct node {
	int data;
	struct node *next;
};
int main(){
struct node *first=(struct node*)malloc(sizeof(struct node));
first->next=NULL;
first->data=20;
printf("%p",first);
	

	
	
	
	
	
	
	
	
//	int a = 15;
//	int *p = &a;
//	
//	float b = 45.12;
//	int *P=NULL;    //null pointer
//	int *q;         //wild pointer
//	
	
//	float *q = &b;
//	
//	void *P;
//	P=&a;
//	printf("%d",(int*)P);
//	
//	P=&b;
////	printf("\n %f",(float*)P);
//	
//	//P = (int*)(&a);
//	printf("\n address of a is : %x",P);
//	
////	printf("\n %X",p);
//	printf("\n %X",q);
//	
//	
//	
}
