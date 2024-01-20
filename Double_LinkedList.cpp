#include<iostream>
#include<stdlib.h>
using namespace std;

class node{
	public:
		int value,pos;
		node *next;
		node* prev;
	node(){
		value = 0;
		next = NULL;
		prev = NULL;
	}
};

class LinkedList{
	node *head;
	int size;
	public:
		LinkedList(){
			head = NULL;
		}
		
		//insertion of a nodein the beginning of a double linked list
		void insertionAtBeginning(int v){
			node* temp = NULL;
			
			if(head != NULL){
				temp->next = head;
				head->prev = temp;
			}
			else{
				head = temp;
			}
		
		}
		
		void printLL(){
			node *t = head;
		while(t != NULL){
			cout << t -> value << "  ";
			t = t -> next;
		}
		

		cout << endl << endl;
		}
		
	};


int main(){
	LinkedList l1;
	
	l1.insertionAtBeginning(45);
	l1.insertionAtBeginning(75);
	
	l1.printLL();
	
	
}
