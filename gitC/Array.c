#include<stdio.h>
//code by krish
int main(){
	int elea[3][3], i, j, b=0;
	
	printf("Your 3*3(2D) matrix:- \n");
	
	
	for(i=0; i<=2; i++){
	  for(j=0; j<=2; j++){
		printf("Enter (%d,%d) position element= ",i,j);
		scanf("%d",&elea[i][j]);
	  }
	}
	
	printf("--------------------------------\n Result is: \n\n");
	
	for(i=0; i<=2; i++){
	  for(j=0; j<=2; j++){
		printf(" %d ",elea[i][j]);
	  }
		 if(j / 3 == 1){
	   	     printf("\n");
	       }else{
	   	     b = b + 1;//useless part for just matrix
	      }
	}
	
	return 0;
}
