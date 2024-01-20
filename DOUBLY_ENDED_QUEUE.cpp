#include<stdio.h>

#define Max_Size 5
int queue[Max_Size];
int front = -1, rear = -1;
int item;

void Enqueue_F();
void Enqueue_R();
void Dequeue_F();
void Dequeue_R();
void Display();


int main(){
    int choice, item;
    printf("\n Press (1) for Enqueue from FRONT \n Press (2) for Enqueue from REAR  \n Press (3) for dequeue from FRONT \n Press (4) for Dequeue from REAR \n Press (5) for display \n Press (6) to EXIT \n \n");
    do {
        printf("Enter your choice : ");
        scanf("%d", &choice);

        switch (choice){
        case 1: Enqueue_F();
            break;
        case 2: Enqueue_R();
            break;
        case 3: Dequeue_F();
            break;
        case 4: Dequeue_R();
            break;
        case 5: Display();
            break;
        case 6: printf("EXIT...........");
            break;
        default: printf("Enter the Valid option...........\n");
            break;
        }
    }while(choice != 6);
}

void Enqueue_F(){
    printf("\n****************  Insertion from FRONT  ****************\n");
    if(front == 0 && rear == Max_Size - 1){
        printf("Overflow and Exit ........... \n");
    }
    else{
        printf("Enter the number : ");
        scanf("%d", &item);
        if(front == -1){
            front = rear = 0;
        }
        // else if(front == 0){
        //     front = Max_Size-1;
        // }
        else{
            front++;
            rear++;
        }
        queue[front] = item;
        printf("the Item %d Inserted from the FRONT........ \n",item);
    }
}

void Enqueue_R(){
    printf("\n****************  Insertion from REAR  ****************\n");
    if(rear == Max_Size - 1){
        printf("Overflow and Exit ........... \n");
    }
    else{
        printf("Enter the number : ");
        scanf("%d", &item);
        if(front == -1){
            front = rear = 0;
        }
        else if(rear == Max_Size -1){
            rear = 0;
        }
        else{
            rear++;
        }
        queue[rear] = item;
        printf("The Item %d Inserted from the END........ \n",item);
    }
}

void Dequeue_F(){
    if(front == -1){
        printf("Underflow and exit..............\n");
    }
    else if(front == rear){
        item = queue[front];
        front = rear = -1;
        printf("Item : %d has been deleted from FRONT................\n",item);      
    }
    else if(front = Max_Size-1){
        front = 0;
    }
    else{
        item = queue[front];
        front++;
        printf("Item : %d has been deleted from FRONT.................\n",item);
    }
}

void Dequeue_R(){
    if(front == -1){
        printf("Underflow and exit..............\n");
    }
    else if(front == rear){
        item = queue[front];
        front = rear = -1;
        printf("Item : %d has been deleted from END.................\n",item);      
    }
    else{
        item = queue[rear];
        rear--;
        printf("Item : %d has been deleted from END.................\n",item);
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
