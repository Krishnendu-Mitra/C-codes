#include <stdio.h>  
#include <stdlib.h>  
//code by krish
typedef struct node{  
   int data;  
   struct node *link;  
}nd;  
nd *head;  
void push(){  
    int element;  
    nd *temp = (nd*)malloc(sizeof(nd));   
    if(temp == NULL){  
        printf("Sorry, Memory not available!");   
    }else{  
        printf("Enter the element = ");  
        scanf("%d",&element);  
        if(head==NULL){         
            temp->element = element;  
            temp->link = NULL;  
            head=temp;  
        }else {  
            temp->element = element;  
            temp->link = head;  
            head=temp;              
        }  
        printf("Element inserted successfully\n");      
    }  
}  
void pop(){  
    int element;  
    nd *temp;  
    if (head == NULL){  
        printf("Memory Underflow\n");  
    }else{  
        element = head->data;  
        temp = head;  
        head = head->link;  
        free(temp);  
        printf("Element deleted successfully\n");  
    }  
}  
void display(){  
    int i;  
    nd *temp;  
    temp=head;  
    printf("Stack element is = \n");
    if(temp == NULL){  
        printf(" Empty\n");  
    }else{ 
    	printf("Start ->");
        while(temp!=NULL){  
            printf("%d ->",temp->data);  
            temp = temp->link;  
        }  
        printf("End\n");
    }  
}  
int main (){  
    int choice=0;     
        printf("\n\tMenu\n----------------------------------------------\n");
        printf("1.Push\n2.Pop\n3.Show\n4.Quit\n");  
        printf("----------------------------------------------\n");
    while(choice != 4){
        printf("Enter your choice: ");        
        scanf("%d",&choice);  
        switch(choice){  
            case 1:  
                push();  
                break;  
            case 2:  
                pop();  
                break;  
            case 3:  
                display();  
                break;  
            case 4:   
                printf("Exit()..\n");  
                break;   
            default:  
                printf("Invalid choice, Try again\n");  
      }
  }  
return 0;
}  

