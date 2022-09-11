#include<stdio.h>
//code by krish
int main(){
  int arr[5] = {5,7,10,2,9}, i;
  int *ptr = &arr[0];

 for(i=0; i<=5; i++){
   printf(" %d ",*(ptr+i));
  }

  return 0;
}