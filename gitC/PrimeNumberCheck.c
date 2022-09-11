#include<stdio.h>
//code by krish
int main(){
	int a, i, b=0;
	printf("Enter a number: ");
	scanf("%d", &a);
    if(a>0){	
      for(i=1; i<=a; i++){
    	  if(a % i == 0)
    	  b++;
	  }
	  if(b == 2){
	    printf(" %d is prime \n", a);
	  }else if(b != 2){
	    printf(" %d is not prime \n", a);
	  }else{
	    printf(" error! \n");
	  }
   }else if(a<0){
    printf(" -ve is not valid \n");
   }else{
    printf(" Syntex error! \n");
   }
    
  return 0;
}