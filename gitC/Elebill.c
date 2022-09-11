#include<stdio.h>
//code by krish
int main(){
   int a, b=100, c, d;
   printf(" Nuclear Electric bill calculator \n");
   printf("----------------------------------- \n");
   printf(" Enter your unit(60Hz): ");
   scanf("%d",&a);
   
    if(a<0){
   	  printf(" Nagetive unit is not valid in our universe \n");
    }else if(a>=0 && a<=10){
   	  printf(" Kindly pay us: %d rupess \n", b);
   	  printf(" It is your parsonal bill");
    }else if(a<=25 && a>10){
   	  c = (a-10)*15;
   	  b = b+c;
   	  printf(" Kindly pay us: %d rupess \n", c);
   	  printf(" It is your parsonal bill");
    }else if(a>25){
   	  d = (a-25)*50;
   	  b= b+d;
   	  printf(" Kindly pay us: %d rupess \n", d);
   	  printf(" It is your commersial bill");
    }else{
   	  printf(" Syntex error!");
    }
  return 0;
}
