#include<stdio.h>
//code by krish
int main(){
	int ele[8], i, j=0, k=1, l=2;
	
	for(i=1; i<=9; i++){
		printf("Your matrix %d element: ",i);
		scanf("%d",&ele[j]);
		j++;
	}
	printf("--------------------------------\n");
	j=0;
	for(i=1; i<=9; i++){
		printf(" %d \t",ele[j]);
		j++;
		if(i % 3 == 0)
		printf("\n");
	} 
	printf("--------------------------------\n");
	j=0;
	printf("Inverse of the matrix is:- \n\n");
	for(i=1; i<=9; i++){
		if(i>=1 && i<=3){
		 printf(" %d \t",ele[j]);
		 j = j+3;
		 if(i % 3 == 0)
		 printf("\n");
	   }else if(i>=4 && i<=6){
		 printf(" %d \t",ele[k]);
		 k = k+3;
		 if(i % 3 == 0)
		 printf("\n");
	   }else if(i>=7 && i<=9){
		 printf(" %d \t",ele[l]);
		 l = l+3;
		 if(i % 3 == 0)
		 printf("\n");
		}else{
	   	printf("error!\n");
	   }
	   
	}
	
	
	return 0;
}
