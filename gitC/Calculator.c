#include <stdio.h>
#include<math.h>
//code by krish
int main() {

  char op;
  double num1, num2, num3;
  
  printf("Enter 1st operands: ");
  scanf("%lf", &num1);
  printf("Enter 2nd operands: ");
  scanf("%lf", &num2);
  printf("Enter an operator: ");
  scanf("%s", &op);
  
  switch (op) {
    case '+':
      printf("A nswer is %.1lf",num1 + num2);
      break;
    case '-':
      printf("A nswer is %.1lf",num1 - num2);
      break;
    case '*':
      printf("A nswer is %.1lf",num1 * num2);
      break;
    case '/':
      printf("A nswer is %.1lf",num1 / num2);
      break;
    case '^':
    	num3 = pow(num1,num2);
      printf("A nswer is %.1lf",num3);
      break;
    case '!':
    	if(num1>=0){
    	for(num3=num1-1; num3>=1; num3--){
	    num1 = num1 * num3;
        }
    	num2 = 0;
       printf("A nswer is %.1lf",num1);
      }else{
      	printf("Error!, -ve found \n");
	  }
      break;
    
    
    default:
      printf("Operator is invalid, sorry! \n");
  }

  return 0;
}
