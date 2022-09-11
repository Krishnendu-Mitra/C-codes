#include<stdio.h>
#include<math.h>
//code by krish(power)
int main(){
	float a,b,c;
	printf("Enter the number: ");
	scanf("%f",&a);
	printf("Enter the power: ");
	scanf("%f",&b);
	
	c = pow (a,b);  //500,25
	printf("Your value is %f \n",c);
	
	return 0;
}
