#include<stdio.h>
int main(){
	int elea[100][100], eleb[100][100], i, j, a=0, b=0, result[100][100];
	printf("Your box matrix:- \n");
	printf("size of matrix(under 100)= ");
	scanf("%d",&a);
	a = a - 1;
	printf("1st matrix: \n");
	for(i=0; i<=a; i++){
		for(j=0; j<=a; j++){
			printf("Enter the (%d,%d) element= ",i,j);
			scanf("%d",&elea[i][j]);
		}
	}
	printf("--------------------------------\n");
	for(i=0; i<=a; i++){
		for(j=0; j<=a; j++){
			printf(" %d ",elea[i][j]);
		}
		if(j / (a+1) == 1){
			printf("\n");
		}else{
			b = b + 1;
		}
	}
	printf("--------------------------------\n");
	printf("2nd matrix: \n");
	for(i=0; i<=a; i++){
		for(j=0; j<=a; j++){
			printf("Enter the (%d,%d) element= ",i,j);
            scanf("%d",&eleb[i][j]);			
		}
	}
	printf("--------------------------------\n");
	for(i=0; i<=a; i++){
		for(j=0; j<=a; j++){
			printf(" %d ",eleb[i][j]);
		}
		if(j / (a+1) == 1){
			printf("\n");
		}else{
			b = b + 1;
		}
	}
	printf("--------------------------------\n");
	printf("For addition = 1, subtraction = 2, multiplication = 3 etc.\n");
	printf("What you want to do: ");
	scanf("%d",&b);
	if(b == 1){
		printf("You choose addition, and the addition of two matrix is:- \n\n");
		for(i=0; i<=a; i++){
			for(j=0; j<=a; j++){
				result[i][j] = elea[i][j] + eleb[i][j];
				printf(" %d ",result[i][j]);
			}
			if(j / (a+1) == 1){
				printf("\n");
			}
		}
	}else if(b == 2){
		printf("You choose subtraction, and the subtraction of two matrix is:- \n\n");
		for(i=0; i<=a; i++){
			for(j=0; j<=a; j++){
				result[i][j] = elea[i][j] - eleb[i][j];
				printf(" %d ",result[i][j]);
			}
			if(j / (a+1) == 1){
				printf("\n");
			}
		}
	}else if(b == 3){
		printf("You choose subtraction, but subtraction of two matrix is not ready:- \n\n");
		for(i=0; i<=a; i++){
			for(j=0; j<=a; j++){
				result[i][j] = (elea[i][j]*eleb[i][j])+(elea[i][j+1]*eleb[i+1][j])+(elea[i][j+2]*eleb[i+2][j]); //for first element
				printf(" %d ",result[i][j]);
			}
			if(j / (a+1) == 1){
				printf("\n");
			}
		}
	}else{
		printf("Operation not valid!,Sorry.\n");
	}
	return 0;
}
