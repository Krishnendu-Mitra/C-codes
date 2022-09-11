#include<stdio.h>
#define b 2
int main(){
	
	//"D:\Large system 1\img data\diagonalMatrix.png" ( for my help purpose )
	
	int elea[3][3], i, j, k, a=b;
	
	printf("Your %d*%d matrix is: \n",a+1,a+1);
	for(i=0; i<=a; i++){
		for(j=0; j<=a; j++){
			printf("Enter the (%d,%d) element= ",i,j);
			scanf("%d",&elea[i][j]);
		}
	}
	printf("--------------------------------\n");
	for(i=0; i<=a; i++){
		for(j=0; j<=a; j++){
			printf(" %d\t",elea[i][j]);
		}
		printf("\n");
	}
	
	printf("--------------------------------\n");
	printf("Left Diagonals element of the matrix is: \n");
	for(i=0; i<=a; i++){
		for(j=0; j<=a; j++){
			if(i==j){
				printf(" %d\t",elea[i][j]);
			}else{
				printf("\t");
			}
		}
		printf("\n");
	}
	printf("--------------------------------\n");
	printf("Right Diagonals element of the matrix is: \n");
	for(i=0; i<=a; i++){
		for(j=0; j<=a; j++){
			if((i+j) == a){
				printf(" %d\t",elea[i][j]);
			}else{
				printf("\t");
			}
		}
		printf("\n");
	}
	
	return 0;
}
