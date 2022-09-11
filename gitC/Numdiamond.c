#include<stdio.h>
//code by kish(numDiamond print)
int main(){
	
	int a,b,c,i;
    printf("Enter the number of rows: ");
    scanf("%d", &a);
    printf("\n");
    
if(a>=2){
   for(i = 1; i <= a; i++){
   	  //c=i-1;
     for (b = 1; b <= a-i; b++)
      printf(" ");
     for(b = 1; b <= i; b++)
      printf("%d",b);
      for(b = b-2; b >= 1; b--)
      printf("%d",b);
      printf("\n");
   }
   
   for(i = a-1; i >= 1; i--){
        for(b = a; b > i; b--)
        printf(" ");
    for(b = 1; b < i+1; b++)
     printf("%d",b);
     for(b = b-2; b >= 1; b--)
      printf("%d",b);
    printf("\n");
    }
    
}else{
	printf("Syntex error! \n");
}
	
	return 0;
}
