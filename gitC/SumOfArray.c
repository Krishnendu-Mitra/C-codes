#include<stdio.h>
//code by krish
int main(){
	int elea[3][3], eleb[3][3], i, j, b=0, result[3][3];
	
	printf("Your 3*3(2D) matrix:- \n");
	
	printf("1st matrix is here: \n");
	for(i=0; i<=2; i++){
	  for(j=0; j<=2; j++){
		printf("Enter (%d,%d) position element= ",i,j);
		scanf("%d",&elea[i][j]);
	  }
	}
	
	printf("--------------------------------\n Matrix 1 is: \n\n");
	
	for(i=0; i<=2; i++){
	  for(j=0; j<=2; j++){
		printf(" %d ",elea[i][j]); //use /t
	  }
	   	     printf("\n");
	}
	
	printf("--------------------------------\n");
	
	printf("2nd matrix is here: \n");
	for(i=0; i<=2; i++){
	  for(j=0; j<=2; j++){
		printf("Enter (%d,%d) position element= ",i,j);
		scanf("%d",&eleb[i][j]);
	  }
	}
	
	printf("--------------------------------\n Matrix 2 is: \n\n");
	
	for(i=0; i<=2; i++){
	  for(j=0; j<=2; j++){
		printf(" %d ",eleb[i][j]);
	  }
	   	     printf("\n");
	}
	
	printf("--------------------------------\n Sum of two matrix is: \n\n");
	
	for(i=0; i<=2; i++){
		for(j=0; j<=2; j++){
			result[i][j] = elea[i][j] + eleb[i][j];
			printf(" %d ",result[i][j]);
		}
	   	     printf("\n");
	}
	
	return 0;
}
