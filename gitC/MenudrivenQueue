#include<stdio.h>
#include<stdlib.h>
#define MAX 10
//code by krish(1st ans)
int queue_arr[MAX];
int rear=-1;
int front=-1;

void insert(int element){
        if( isFull() ){
                printf("\nQueue Overflow\n");
                return;
        }
        if( front == -1 )
                front=0;
        rear=rear+1;
        queue_arr[rear]=element ;
}
int del(){
        int element;
        if( isEmpty() ){
                printf("\nQueue Underflow\n");
                exit(1);
        }
        element=queue_arr[front];
        front=front+1;
        return element;
}
int peek(){
        if( isEmpty() ){
                printf("\nQueue Underflow\n");
                exit(1);
        }
        return queue_arr[front];
}
void display(){
        int i;
        if ( isEmpty() ){
                printf("\nQueue is empty\n");
                return;
        }
        printf("\nQueue is :\n\n");
        for(i=front;i<=rear;i++)
                printf("%d  ",queue_arr[i]);
        printf("\n\n");
}
int isFull(){
        if( rear==MAX-1 )
                return 1;
        else
                return 0;
}
int isEmpty(){
        if( front==-1 || front==rear+1 )
                return 1;
        else
                return 0;
}
int main(){
    int choice, element, r=1;
        while(r){
        	    printf("\nMenu\n----------------------------------------------\n");
                printf("\n1.Insert\n2.Delete\n3.Display element at the front\n4.Display all elements of the queue\n5.Quit\n");
                printf("----------------------------------------------");
                printf("\nEnter your choice : ");
                scanf("%d",&choice);
                switch(choice){
                case 1:
                        printf("\nInput the element for adding in queue : ");
                        scanf("%d",&element);
                        insert(element);
                        break;
                case 2:
                        element=del();
                        printf("\nDeleted element is  %d\n",element);
                        break;
                case 3:
                        printf("\nElement at the front is %d\n",peek());
                        break;
                case 4:
                        display();
                        break;
                case 5:
                        exit(1);
                default:
                        printf("\nInvalid choice, check your eyes\n");
                }
        }
        return 0;
}
