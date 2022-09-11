#include<stdio.h>
//code by krish(factorial)
int main(){
	long long int a,i;
	printf("Enter the number(0 to 20): ");  // 0 to 2432902008176640000.
	scanf("%lld",&a);  
	
	//x! = x*(x-1)*(x-2)*(x-3)*....*1
	
	if(a>=0 && a<=20){
	  for(i=a-1; i>=1; i--){
	    a = a * i;
      }  
     printf("Your factorial is %lld \n\n",a);
    }else{
      printf("Syntex error! \n\n");
	}
	
	return 0;
}
