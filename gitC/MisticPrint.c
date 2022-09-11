#include<stdio.h>
//code by krish(Mistic print)
int main(){
	
	int a, i;
	printf("Enter the last number: ");
	scanf("%d",&a);
	
	if(a>0){
		
		for(i=1; i<=a; i++){
			if(i % 3 == 0 && i % 6 == 0 && i % 9 == 0){
				printf(" %d is a Mistic number. \n",i);
			}
		}
		
	}else{
		printf(" %d is unorder input \n",i);
	}
	
	return 0;
}
