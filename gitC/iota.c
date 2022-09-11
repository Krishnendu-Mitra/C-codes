#include<stdio.h>
//code by krish(iota)
int main(){
   long int a, i;
   printf("Input a negetive value: ");
   scanf("%ld",&a);
   
   if(a>0){
   	i = a - (2*a);
   	printf("Your iota value is: %d+(i^2) \n",i);
   }else if(a<0){
     i = a - (2*a);
     printf("Your iota value is: %d+(i^2) \n",i);
   }else if(a==0){
   	 printf("(*_*)! , 0 is a consept number \n");
   }else{
   	printf("Syntex error! \n");
   }
	return 0;
}
