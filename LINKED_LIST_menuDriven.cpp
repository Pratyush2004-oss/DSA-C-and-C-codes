#include<iostream>
#include<stdlib.h>
using namespace std;

class node{
	public:
		int value,pos;
		node *next;
	node(){
		value = 0;
		next = NULL;
	}
};

class Single_LL{
	node *head;
	public:
		Single_LL(){
			head = NULL;
		}
		
		//insertion of a node at END of the linked list
		void insertAt_End(int v){
			node *temp = new node();
			temp->value = v;
			
			//no LL is created
			if(head == NULL){	
				head = temp;
			}
			else{
				node *p = head;
				while(p->next != NULL){
					p = p->next;
				}
				p->next = temp;
			}	
		}
		
		
		//insertion of a node at BEGINNING of the linked list
		void 
};

int  main(){
	
}
