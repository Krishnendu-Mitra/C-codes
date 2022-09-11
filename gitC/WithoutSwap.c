#include<stdio.h>
//code by krish(swap with out swap function)
int main(){
	
	int a, b, c=0;
	printf(" Enter your 1st number: ");
	scanf("%d",&a);
	printf(" Enter your 2nd number: ");
	scanf("%d",&b);
	
	printf("--------------------------------\n");
	printf(" Before change your number is: \n");
	printf(" 1st number is: %d \n",a);
	printf(" 2nd number is: %d \n",b);
	printf("\n");
	
	printf("--------------------------------\n");
	c = c+a;
	a = b+0;
	b = c+0;
	printf(" After change your number is: \n");
	printf(" 1st number is: %d \n",a);
	printf(" 2nd number is: %d \n",b);
	printf("\n");
	
	return 0;
}
