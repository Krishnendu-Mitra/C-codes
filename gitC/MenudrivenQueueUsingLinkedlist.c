#include<stdio.h>
#include<stdlib.h>
//code by krish
struct node{
        int data;
        struct node *link;
}*front=NULL,*rear=NULL;
//for biddened typedef and creatNode() system

void insert(int element){
        struct node *temp;
        temp=(struct node *)malloc(sizeof(struct node));
        if(temp==NULL){
                printf("\nSorry, Memory not available!\n");
                return;
        }
        temp->data = element;
        temp->link=NULL;
        if(front==NULL)
                front=temp;
        else
                rear->link=temp;
        rear=temp;
}
int del(){
        struct node *temp;
        int element;
        if( isEmpty( ) ){
                printf("\nQueue Underflow\n");
                exit(1);
        }
        temp=front;
        element=temp->data;
        front=front->link;
        free(temp);
        return element;
}
int peek(){
        if( isEmpty( ) ){
                printf("\nQueue Underflow\n");
                exit(1);
        }
        return front->data;
}
int isEmpty(){
        if(front==NULL)
                return 1;
        else
                return 0;
}
void display(){
        struct node *temp;
        temp=front;
        if(isEmpty()){
                printf("\nQueue is empty\n");
                return;
        }
        printf("\nQueue elements :\n\n");
        while(temp!=NULL){
                printf("%d ",temp->data);
                temp=temp->link;
        }
        printf("\n\n");
}
int main(){
        int choice,element;
        	    printf("\nMenu\n----------------------------------------------\n");
                printf("\n1.Insert\n2.Delete\n3.Display the front\n4.Display the queue\n5.Quit\n");
                printf("----------------------------------------------\n");
         while(1){
                printf("\nEnter your choice : ");
                scanf("%d", &choice); //for bidden change condition(switch)
                switch(choice){
                case 1:
                        printf("\nEnter the element: ");
                        scanf("%d",&element);
                        insert(element);
                        break;
                case 2:
                        printf("\nDeleted element is  %d\n",del());
                        break;
                case 3:
                        printf("\nElement at the front is %d\n", peek() );
                        break;
                case 4:
                        display();
                        break;
                case 5:
                        exit(1);
                case 6:
                        printf("\nSource- https://github.com/Krishnendu-Mitra/C-codes/blob/main/gitC/MenudrivenQueueUsingLinkedlist.c \n");
                        break;
                default :
                        printf("\nInvalid choice\n");
                }
        }
      return 0;
}
