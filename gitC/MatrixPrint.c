#include<stdio.h>
//code by krish
int main(){
	int ele[8], j=0, i;
	
	for(i=1; i<=9; i++){
       printf("Your matrix %d elements: ",i);
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
	
	
	return 0;
}
