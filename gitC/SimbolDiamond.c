#include<stdio.h>
//code by kish(diamond print)
int main(){
	
	int a,b,c,i,j,k;
	char ch;
	printf("Enter the one simbole only: ");
	scanf("%c",&ch);
    printf("Enter the number of rows: ");
    scanf("%d",&a);
    printf("\n");
    
if(a>=2){
   for(i = 1; i <= a; i++){
   	  //c=i-1;
     for (b = 1; b <= a-i; b++)
      printf(" ");
     for(b = 1; b <= 2*i-1; b++)
      printf("%c",ch);
      printf("\n");
   }
   
   for(i = a-1; i >= 1; i--){
        for(j = a; j > i; j--){
        printf(" ");
    }
    for(k = 1; k < (i*2); k++){
        printf("%c",ch);
    }
    printf("\n");
    }
    
}else{
	printf("Syntex error!");
}
	
	return 0;
}
