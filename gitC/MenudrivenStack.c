#include<stdio.h>
#include<stdlib.h>
#define MAX 20
//code by krish
int stack_arr[MAX];
int top = -1;
void push(int element){
        if( isFull() ){
                printf("\nStack Overflow\n");
                return;
        }
        top = top+1;
        stack_arr[top] = element;
}
int pop(){
        int element;
        if( isEmpty() ){
                printf("\nStack Underflow\n");
                exit(1);
        }
        element = stack_arr[top];
        top = top-1;
        return element;
}
int peek(){
        if( isEmpty() ){
                printf("\nStack Underflow\n");
                exit(1);
        }
        return stack_arr[top];
}
int isEmpty(){
        if( top == -1 )
                return 1;
        else
                return 0;
}
int isFull(){
        if( top == MAX-1 )
                return 1;
        else
                return 0;
}

void display(){
        int i;
        if( isEmpty() ){
                printf("\nStack is empty\n");
                return;
        }
    printf("\nStack elements :\n\n");
        for(i=top;i>=0;i--)
                printf(" %d\n", stack_arr[i] );
        printf("\n");
}
int main(){
      int choice,element;
        printf("\nMenu\n----------------------------------------------\n");
        printf("\n1.Push\n2.Pop\n3.Display the top element\n4.Display all stack elements\n5.Quit\n");
        printf("----------------------------------------------");
        while(1){
                printf("\nEnter your choice : ");
                scanf("%d",&choice);
                switch(choice){
                 case 1 :
                        printf("\nEnter the element to be pushed : ");
                        scanf("%d",&element);
                        push(element);
                        break;
                 case 2:
                        element = pop();
                        printf("\nPopped element is : %d\n",element );
                        break;
                 case 3:
                        printf("\nElement at the top is : %d\n", peek() );
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
