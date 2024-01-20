#include<stdio.h>

#define Max_Size 5
int queue[Max_Size];
int front = -1, rear = -1;
int item;


void Enqueue();
void Dequeue();
void Display();


int main(){
    int choice, item;
    printf("\n Press (1) for Enqueue in a Simple Queue \n Press (2) for Dequeue in a Simple Queue \n Press (3) for Display in a Simple Queue \n Press (4) for EXIT \n \n");
    do {
        printf("Enter your choice : ");
        scanf("%d", &choice);

        switch (choice){
        case 1: Enqueue();
            break;
        case 2: Dequeue();
            break;
        case 3: Display();
            break;
        case 4: printf("EXIT...........");
            break;
        default: printf("Enter the Valid option...........\n");
            break;
        }
    }while(choice != 4);
}

//Enqueue
void Enqueue(){
    
    if((rear+1)%Max_Size == front){
        printf("Overflow and Exit ........... \n");     //  queue is full
    }
    else{
        printf("Enter the number : ");
        scanf("%d", &item);
        if(front == -1){        //      insert element in first position
            front = rear = 0;
        }
        else{                   //      Insertion of element in the rest of the position
            rear = (rear+1) % Max_Size;
        }
        queue[rear] = item;
        printf("Item Inserted........ \n");
    }
}

//Dequeue
void Dequeue(){
    if(front == -1){
        printf("Underflow and exit..............\n");   //  queue is EMpty
    }
    else if(front == rear){
        item = queue[front];
        front = rear = -1;
        printf("Item : %d has been deleted.................\n",item);     // Deletion of the single element
    }
    else{                       //          Deletion of element from the rest of the positions
        item = queue[front];
        front = (front+1) % Max_Size;
        printf("Item : %d has been deleted.................\n",item);
    }

}

void Display(){
    if(front == -1){
        printf("Queue is Empty.......... \n");
    }
    else{
        for(int j=0;j<Max_Size;j++){
            printf("%d \t",queue[j]);
        }
        printf("\n");
    }
}
