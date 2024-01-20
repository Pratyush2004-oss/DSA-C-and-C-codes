#include<stdio.h>
#include<stdlib.h>
	struct node{
		int data;
		struct node *next;
		
	};
	//counting the number of nodes in the linked list
	void countNode(struct node *head){
		struct node *temp;
		int count=0;
		temp=head;
		while(temp!=NULL){
			temp=temp->next;
			count++;
		}
		printf("number of nodes are %d\n",count);
	}
	
	//printing or traversing of linked list
	void traversing(struct node *head){
		struct node *temp;
		temp=head;
		while(temp!=NULL){
			printf("%d \t",temp->data);
			temp=temp->next;
		}
	}
	
	// searching ofnode in a linked list
	int searching(struct node *head){
		int val,index=1;
		struct node *temp=head;
		printf("enter the value to be searched : ");
		scanf("%d",&val);
		
		while(temp->next!=NULL){
			if(val==temp->data){
				return index;
			}
			index++;
			temp=temp->next;
		}
		return -1;
		
		
	}
	
	int main(){
		struct node *first=(struct node *)malloc(sizeof(struct node));
		struct node *second=(struct node *)malloc(sizeof(struct node));
		struct node *third=(struct node *)malloc(sizeof(struct node));
		struct node *forth=(struct node *)malloc(sizeof(struct node));
		first->data=10;
		first->next=second;
		second->data=20;
		second->next=third;
		third->data=30;
		third->next=forth;
		forth->data=40;
		forth->next=NULL;
		countNode(first);
		
		printf("\n LINKED LIST : ");
		traversing(first);
		
		int index = searching(first);
		if(index != -1){
			printf("Element found in the index : %d",index);
		}
		if(index == -1){
			printf("Element not found");
		}
		
}
