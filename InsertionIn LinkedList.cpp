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

class LinkedList{
	node *head;
	int size;
	public:
		LinkedList(){
			head = NULL;
		}
		void insertAtEnd(int v){
			node *temp = new node();
			temp -> value = v;

		if(head == NULL){
			head = temp;
		}
		else{
			node *p = head;
			while(p->next!=NULL){
				p = p->next;
			}
			p -> next = temp;
			}
		}
		
		void insertAtBeginning(int v){
			node *temp = new node();
			temp -> value = v;
			
			if(head == NULL){
				head=temp;
			}
			else{
				temp -> next = head;
				head = temp;
			}
		}
		
//		void insertAtRandom(int v,int pos){
//			node *temp = new node();
//			
//			if(pos==0){
//
//			}
//			temp -> value = v;
//			temp -> next = head;
//			
//			}
//			
//		}
	
	
	
		//deletion of element from the beginnning in Linked List
		void deleteFrom_Start(){
			if(head==NULL){
				cout<< ("List is empty and element cannot be deleted");
			}
			
			node* temp = head;
			head = head->next;
			free(temp);
		}
		
		
		//deletion of element from the Last in Linked List
		void deleteFrom_End(){
			if(head==NULL){
				cout<< ("List is empty and element cannot be deleted");
			}
			
			node* second_last = head;
			
			while(second_last->next->next!=NULL){
				second_last = second_last->next;
			}
			node* temp = second_last->next;
			second_last->next=NULL;
			free(temp);
		}
			
		//Deletion from the specific position in the Linked List
		void Deletefrom_Position(int pos){
			
			if(head==NULL){
				cout<< ("List is empty and element cannot be deleted");
			}
			if(pos==0){
				deleteFrom_Start();
				return;
			}

			node* prev = head;
			int current_pos=0;
			while(current_pos != pos-1){
				prev = prev->next;
				current_pos++;
			}
			node* temp = prev->next;//node to be deleted
			prev->next = prev->next->next;
			free(temp);
		}
		
		//traversing of Linked List
		void printLL(){
		node *t = head;
		while(t!=NULL){
			cout << t -> value << "  ";
			t = t -> next;
		}
		cout << endl << endl;
	}
	
	//	Search of a node in a Linked List
	int SearchElement(){
		cout << ("Enter the element to be Searched : ");
		int val1;
		cin >> val1 ;
		int index = 0;
		node* temp = head;
		while(temp!=NULL){
			if(temp->value==val1){
				return index;
			}
			temp = temp->next;
			index++;
		}
		//if element not found
		return -1;
	}
	
	
	
};


int main(){

	LinkedList l1;
	
	cout << endl << "*************************************....................." << endl << endl << "After insertion in Linked List" << endl << endl;
	l1.insertAtBeginning(10); 
	l1.printLL();
	cout<<"\t\t inserted at begin \n";
	
	l1.insertAtEnd(20);
	l1.printLL();
	cout<<"\t\t inserted at end \n";
	
	l1.insertAtBeginning(30);
	l1.printLL();
	cout<<"\t\t inserted at begin \n";
	
	l1.insertAtEnd(40);
	l1.printLL();
	cout<<"\t\t inserted at end \n";
	
//	l1.insertAtRandom(46,2);
//	l1.printLL();


	cout << endl << "*************************************..................." << endl << endl << "After Deletion from speific position" << endl << endl;
	l1.Deletefrom_Position(1);
	l1.printLL();
	
	
	cout << endl << "*************************************.................." << endl << endl << "After Deletion from first position" << endl << endl;
	l1.deleteFrom_Start();
	l1.printLL();
	
	cout << endl << "*************************************..................." << endl << endl << "After Deletion from last position" << endl << endl;
	l1.deleteFrom_End();
	l1.printLL();
	
	cout << endl << endl;
	l1.insertAtBeginning(40);
	l1.insertAtBeginning(75);
	l1.insertAtEnd(89);
	l1.insertAtEnd(69);
	l1.insertAtBeginning(28);
	
	l1.printLL();
	
	
	int index = l1.SearchElement();
	if(index != -1){
		cout << "Index of the searched element is : "<< index << endl;
	}
	else{
		cout << "Element not found" << endl << endl;
	}
	
	
return 0;
}

