#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};

struct node *front = NULL;
struct node *rear = NULL;

void enqueue(){
	struct node *new_node = (struct node*)malloc(sizeof(struct node));
	printf("Enter the data to be inserted : ");
	scanf("%d",&new_node->data);
	new_node->next = NULL;
	
	if(front==NULL && rear==NULL){
		front = rear = new_node;
	}
	else{
		rear->next = new_node;
		rear = new_node;
	}
}

void dequeue(){
	struct node *temp = front;
	if(front == NULL && rear == NULL){
		printf("Underflow");
	}
	else{
		front = front->next;
		printf("\n Deleted element is : %d \n",temp->data);
		free(temp);
	}
}

void display(){
	struct node *temp = front;
	while (temp!=NULL){
		printf(" \n \t %d ",temp->data);
		temp = temp->next;
	}
}

int main(){
	int n;
	printf("Enter the number of times you want to insert : ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		enqueue();
	}
	display();
	dequeue();
	display();
	
	
	
}


