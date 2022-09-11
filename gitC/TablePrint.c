#include<stdio.h>
//code by krish(5table print)
int main(){
	int a=1, b, c=1, i, j;
	printf("Enter the table: ");
	scanf("%d",&j);
	printf("Enter the last number: ");
	scanf("%d",&b);
	
	if(b % j != 0 && b >=1){
	printf("\n %d is not %d table's element. But we try to \n give you a approx value to base on your given input.... \n\n",b,j);
	}
	
	if(b>=j && j>0){
	  for(i=a; i<=b; i++){
		
		if(i % j == 0){
			printf("  %d * %d = %d \n",j,c,i);
			c++;
		}
		
	  }
   }else if(j<=0 || b<=0){
   	printf(" Your input is invalid \n");
   }else{
   	printf(" Syntex Error! \n");
   }
	
	return 0;
}
