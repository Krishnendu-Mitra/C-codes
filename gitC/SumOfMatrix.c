#include<stdio.h>
int main(){
	
	int elea[8], eleb[8], i, j=0, result=0;
	
	printf("1st 3*3 matrix data:- \n");
	for(i=1; i<=9; i++){
		printf("Your matrix %d elements: ",i);
		scanf("%d",&elea[j]);
		j++;
	}
	printf("---------------------------------\n");
	j=0;
	for(i=1; i<=9; i++){
		printf(" %d \t",elea[j]);
		j++;
		if(i % 3 == 0)
		printf("\n");
	}
	printf("---------------------------------\n");
	j=0;
	printf("2nd 3*3 matrix data:- \n");
	for(i=1; i<=9; i++){
		printf("Your matrix %d elements: ",i);
		scanf("%d",&eleb[j]);
		j++;
	}
	printf("---------------------------------\n");
	j=0;
	for(i=1; i<=9; i++){
		printf(" %d \t",eleb[j]);
		j++;
		if(i % 3 == 0)
		printf("\n");
	}
	printf("---------------------------------\n");
	j=0;
	printf("Sum of those two matrix:- \n\n");
	for(i=1; i<=9; i++){
		result = elea[j] + eleb[j];
	   printf(" %d \t",result);
   	   j++;
	   if(i % 3 == 0)
		printf("\n");
	}
	
	return 0;
}
