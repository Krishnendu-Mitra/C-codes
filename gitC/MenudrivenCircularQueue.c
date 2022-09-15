#include<stdio.h>
#include<stdlib.h>
#define MAX 20
//code by krish
int cqueue_arr[MAX];
int front=-1, rear=-1;

void insert(int element){
        if( isFull() ){
                printf("\nQueue Overflow\n");
                return;
        }
        if(front == -1 )
                front=0;
        if(rear==MAX-1)
                rear=0;
        else
                rear=rear+1;
        cqueue_arr[rear]=element ;
}
int del(){
        int element;
        if( isEmpty() ){
                printf("\nQueue Underflow\n");
                exit(1);
        }
        element=cqueue_arr[front];
        if(front==rear){
                front=-1;
                rear=-1;
        }
        else if(front==MAX-1)
                front=0;
        else
                front=front+1;
        return element;
}
int peek(){
        if( isEmpty() ){
                printf("\nQueue Underflow\n");
                exit(1);
        }
        return cqueue_arr[front];
}
int isEmpty(){
        if(front==-1)
                return 1;
        else
                return 0;
}
int isFull(){
        if((front==0 && rear==MAX-1) || (front==rear+1))
                return 1;
        else
                return 0;
}
void display(){
        int i;
        if(isEmpty()){
                printf("\nQueue is empty\n");
                return;
        }
        printf("\nQueue elements :\n");
        i=front;
        if( front<=rear ){
                while(i<=rear)
                        printf("%d ",cqueue_arr[i++]);
       }else{
                while(i<=MAX-1)
                        printf("%d ",cqueue_arr[i++]);
                i=0;
                while(i<=rear)
                        printf("%d ",cqueue_arr[i++]);
        }
        printf("\n");
}
int main(){
     int choice,element;
        	    printf("\nMenu\n----------------------------------------------\n");
                printf("\n1.Insert\n2.Delete\n3.Peek\n4.Display\n5.Quit\n");
                printf("----------------------------------------------\n");
            while(1){
                printf("Enter your choice : ");
                scanf("%d",&choice);
                switch(choice){
                case 1 :
                        printf("\nInput the element for insertion : ");
                        scanf("%d",&element);
                        insert(element);
                        break;
                case 2 :
                        printf("\nElement deleted is : %d\n",del());
                        break;
                case 3:
                        printf("\nElement at the front is  : %d\n",peek());
                        break;
                case 4:
                        display();
                        break;
                case 5:
                        exit(1);
                default:
                        printf("\nInvalid choice\n");
                }
        }
        return 0;
}
