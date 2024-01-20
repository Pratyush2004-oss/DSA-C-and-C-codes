#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
struct node *next;
};

struct node *head;
void beginsert();
void lastinsert();
void randominsert();
void begin_deletc();
void last_delete();
void random_dclete();
void display();
void search();

void main(){
    int choice = 0;
    printf("Choose one option from the following list ...1. Insert in beginning \n2. Insert at last \n3. Insert at any random locatiom \n4. Delete from Beginning \n5. Delete from last \n6. Delete node after specified location \n7. Search for a node in a Linked List. \n8. Display of Linked List. \n9. Exit");
    while(choice != 9){
    printf("\nEnter your choice : ");
    switch(choice){
        case 1:
            beginsert();
            break;
        case 2:
            lastinsert();
            break;
        case 3:
            randominsert();
            break;
        case 4:
            begin_delete();
            break;
        case 5:
            last_delete();
            break;
        case 6:
            random_delete();
            break;
        case 7:
            search();
            break;
        case 8:
            display();
            break;
        case 9:
            exit(0);
        default:
            printf("enter valid choice...");
         }
    }
}

void beginsert(){
    struct node *ptr;
    int item;
    ptr = (struct node*)malloc(sizeof(struct node));
    if(ptr == NULL){
        printf("\n OVERFLOW");
    }
    else{
        printf("\nEnter value\n");
        ptr->data = item;
        ptr->next = head;
        ptr = head;
        printf("\n Node inserted at the beginning");
    }
}

void lastinsert(){
    struct node *ptr;
    int item;
}

       