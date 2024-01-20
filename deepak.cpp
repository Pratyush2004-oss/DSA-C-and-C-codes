#include<stdio.h>
int n=5;
int queue[5];
int front=-1,rear=-1;
void enqueue(int val){
	if (rear==n-1){
		printf("overflow");
	}else if(front==-1 && rear==-1){
		front=rear=0;
		queue[rear]=val;
	}else{
		rear++;
		queue[rear]=val;
	}
}
void dequeue(){
	if(front=-1&&rear=-1){
		printf("underflow");
	}else if(front==rear){
		front=rear=-1;
	}else{
		printf("%d",queue[front]);
		front++;
	}
}
void display(){
	for(i=front;i<=rear;i++){
		printf("%d",queue[i]);
	}
}
void peak(){
	printf("peak element is %d",queue[front]);
}

int main(){
	enqueue(10);
	dequeue(20);
	dequeue(30);
	display();
	peak();
}
