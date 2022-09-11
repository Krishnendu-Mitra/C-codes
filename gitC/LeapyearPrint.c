#include<stdio.h>
//code by krish(leap yea print)
int main(){
	
	int a=1, b, i;
	printf("Enter the last year: ");
	scanf("%d",&b);
	
	if(b>0){
	  for(i=a; i<=b; i++){
	  	if(i % 4 == 0 || i % 400 == 0){
	    printf(" %d is leapyear \n", i);
	    }else{
	    printf(" %d is not leapyear \n", i);
		}
      }
   }else if(b<=-1){
   	printf(" %d is a rong input \n",b);
   }else{
   	printf(" Syntex error! \n");
   }
	
	return 0;
}
