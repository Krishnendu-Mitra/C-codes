#include<stdio.h>
//code by krish
int main(){
  int array[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
  int I, n,  loc = -1;
  printf("Enter the value to find:  ");
  scanf("%d", &n);
  for( I = 0;  I < 10;  I++){
     if( array[ I ] == n)
       loc = I;
  }
 if( loc == -1 ){
  printf("Value not found\n");
 }else{
   printf("The value %d is found at index %d \n", n, loc);
 }

 return 0;
}

