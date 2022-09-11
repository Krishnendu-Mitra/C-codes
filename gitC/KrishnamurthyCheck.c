/*#include<stdio.h>
//Code by krish(Krishnamurthy print)
int main(){
  int num, sum, alpha, beta, gamma, i;
  printf(" Enter the number: ");
  scanf("%d",&num);
  
  return 0;
  
}*/


#include<stdio.h>
//Krishnamurthy hw by krish
int main(){
  int num, a, sum, b, c, i;
  printf("Enter the number: ");
  scanf("%d",&num);
  a = num;
  sum = 0;
  
  while(a!=0){
    b = a % 10;
    c = 1;
    for(i=1; i<=b; i++){
      c *= i;
    }
    sum += c;
    a /= 10;
  }
  
if(sum == num){
    printf("%d is Krishnamurthy Number.",num);
  }else{
    printf("%d is not a Krishnamurthy Number.",num);
  }
  return 0;
}
