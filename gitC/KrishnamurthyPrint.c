#include<stdio.h>
#include<math.h>
//Code by krish(Krishnamurthy print)
int main(){
  int num, sum, alpha, beta, gamma, i;
  printf(" Enter the number: ");
  scanf("%d",&num);
  alpha = num;
  sum = 0;
  
 if(num>0){
    while(alpha!=0){
     beta = alpha % 10;
     gamma = 1;
     for(i=1; i<=beta; i++){	
      gamma *= i; 
      }
     sum += gamma;
     alpha /= 10;
    }
  
   for(i=1; i<=num; i++){
      if(i == sum){
      printf(" %d is a Krishnamurthy Number. \n",i);
      }else{
      printf(" %d is not a Krishnamurthy Number. \n",i);
      }
   }
  
}else if(num<=0){
	printf(" your value is not valid \n");
}else{
	printf("Syntex error! \n");
}

  return 0;
}
