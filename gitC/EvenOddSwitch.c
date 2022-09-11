#include<stdio.h>
int main(){
	long int a,b;
	printf("Enter the number: ");
	scanf("%ld",&a);
  if(a>=1){
	if(a % 2 == 0){
	 b = 0;
	}else{
	 b = 1;
	}
	switch(b){
	  case 0:
	       printf("%ld is even number\n",a);
	     break;
	  case 1:
	       printf("%ld is odd number\n",a);
	     break;
	  default:
	     printf("%ld is logicless number\n",a);
	}
  }else{
  	printf("Error!");
  }
	return 0;
}
