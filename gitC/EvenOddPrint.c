#include<stdio.h>
//code by krish(evenodd print) ('-')
 int main(){
 	int a=0, b=0, i;
 	
   printf(" Enter start number: ");
   scanf("%d", &a);
   printf(" Enter last number: ");
   scanf("%d", &b);
   
   if(a<b){
   for(i=a; i<=b; i++){
   	 if(i == 0){
   	 	printf(" 0 is a consept number, please change it. \n");
   	 	return 0;
	  }
	  else if(i < 0){
	  	printf(" -ve not valid, sorry \n");
	  	return 0;  //after this commend , my pc not check bellow function and out me in return 0 function
	  }
   	 else if(i % 2 == 0){
     printf("  %d is even. \n", i);
      }else{
	  	printf("  %d is odd. \n", i);
	  }
    }
   }else if(a>b){
   	printf(" Wrong input! , start number is bigger then last one. \n But we fiexd it now, if it is possible... \n");
      for(i=b; i<=a; i++){
   	    if(i == 0){
   	 	printf(" 0 is a consept number, please change it. \n");
   	 	return 0;
	    }
	    else if(i < 0){
	  	printf(" -ve not valid, sorry \n");
	  	return 0;  //after this commend , my pc not check bellow function and out me in return 0 function
	   }
   	   else if(i % 2 == 0){
        printf("  %d is even. \n", i);
       }else{
	  	printf("  %d is odd. \n", i);
	   }
      }
   }else if(a == b){
   	 printf("Your input is equale but \n");
   	 if(a == 0){
   	 	printf(" 0 is a consept number, please change it. \n");
	    }else if(a<0){
	     printf("  -ve is not valid, sorry \n");
		}else if(a % 2 == 0){
        printf("  %d is even. \n", a);
       }else{
	  	printf("  %d is odd. \n", a);
	   }
   }else{
   	printf(" Syntex error!");
   }
   
   return 0;
 }

