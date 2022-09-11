#include<stdio.h>
//code by krish
int main(){
   int a, b, c, d=1, n, i, j, k, result;
   printf("Enter the last number of limit: ");
   scanf("%d",&n);
   for(i=1; i<=n; i++){
       j = i + 0;
       do{
         c = j % 10;
         for(k=1; k<=c; k++){
           d = d*k;
         }
         b = d + 0;
         result = result + b;
         j = j/10;
       }while(j != 0);
       if(result == i){
           printf("Strong number is: %d \n",i);
       }
       result = 0;
   }
    return 0;
}
