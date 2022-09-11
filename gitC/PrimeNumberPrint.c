#include<stdio.h>
//code by krish(prime print)
int main(){
	int a, i, b=0, j;
	printf("Enter a number: ");
	scanf("%d", &a);
	
if(a>0){	
    for(i=1; i<=a; i++){
    	b=0;
    	for(j=1; j<=a; j++){
    		if(i % j == 0)
    		b++;
		}
	    if(b == 2){
		printf(" %d is prime \n", i);
		}else if(b != 2){
		printf(" %d is not prime \n", i);
	    }else{
	    printf(" error! \n");
		}
	}
 }else if(a<0){
 printf(" -ve is not valid \n");
 }else{
 printf(" Syntex error! \n");
 }
    
	return 0;
}
