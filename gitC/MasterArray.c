#include <stdio.h>
#include <stdlib.h>
//code by krish
#define size 20
int arr[size], dL = 0;
void swap(int *a, int *b){
  int temp = *a;
  *a = *b;
  *b = temp;
}
void insert(int element, int n){
	if(dL == size || dL == n){
		printf("Sorry list is full, operation fail!\n");
	}else{
		arr[dL] = element;
		printf("Element insertion successful\n");
		dL++;
	}
}
void del(){
	if(dL == 0){
		printf("Sorry list is empty\n");
	}else{
		arr[dL] = 0;
		dL--;
		printf("Element deletion successful\n");
	}
}
void change(int element){
	int pos;
	printf("Select the position = ");
	scanf("%d",&pos);
	if(pos>=1 && pos<=dL && dL != 0){
		arr[pos-1] = element;
		printf("Change successful\n");
	}else{
		printf("Sorry position not find,try again\n");
		change(element);
	}
}
void sorting(){
	int i,j;
	if(dL == 0){
		printf("Sorry list is empty\n");
	}else{
		for(j=0; j<dL-1; j++){
		    for(i=0; i<dL-j-1; i++){
			    if(arr[i]>arr[i+1]){
				   swap(&arr[i],&arr[i+1]);
			     }
		      }
		 }
		printf("Sorting successful\n");
	}
}
void search(int element){
	int i,j=0;
	for(i=0; i<dL; i++){
		if(arr[i] == element)
		  printf("%d found in position %d\n",element,i+1);
		  j++;
	}if(j == 0){
		printf("Sorry value not found in this list\n");
	}
}
void display(){
	int i;
	if(dL == 0){
		printf("Sorry list is empty\n");
	}else{
	    for(i=0; i<dL; i++){
		    printf(" %d ",arr[i]);
	     }printf("\n");
	}
}
void choiceHolder(){
	int choice=0, element,n;
	printf("Enter the size of list(max size %d) = ",size);
	scanf("%d",&n);
	if(n>20 || n<0){
		printf("Sorry given size is not valid, try again\n");
		choiceHolder();
	}while(choice != 7){
		printf("Enter your choice: ");
		scanf("%d",&choice);
		if(choice == 1){
			printf("Enter the element here = ");
			scanf("%d",&element);
			insert(element,n);
		}else if(choice == 2){
			del();
		}else if(choice == 3){
			sorting();
		}else if(choice == 4){
			printf("Enter the searching element here = ");
			scanf("%d",&element);
			search(element);
		}else if(choice == 5){
			printf("Enter the element here = ");
			scanf("%d",&element);
			change(element);
		}else if(choice == 6){
			display();
        }else if(choice == 7){
        	printf("\n exit() \n");
       }else if(choice == 8){
       	printf("https://github.com/Krishnendu-Mitra/C-codes.git\n");
       }else{
			printf("\nsorry your choice not valid!\n");
		}
	}
}
int main(){
    printf("\t\t Menu \n");
	printf("-------------------------------------------------\n");
	printf("1. Insertion\n2. Deletion\n3. Sorted order\n4. Searching\n5. Value change\n6. Display\n7. Quit\n");
	printf("-------------------------------------------------\n");
    choiceHolder();
return 0;
}
