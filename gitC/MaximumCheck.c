#include<stdio.h>
//code by krish
int main(){
	int num[10],i,max,j=1;
    printf("Enter only 10 values-----\n");

	for(i=1; i<=10; i++){
	printf(" Enter the %d number: ",i);
	scanf("%d",&num[j]);
	j++;
    }
    
    max = num[0];
    j=1;
    
    for(i=1; i<=10; i++){
    	if(max <= num[j]){
    		max = num[j];
    		j++;
	    }else{
		  j++;
		}
	}
	
	printf("\n Max value is = %d\n",max);
	j=1;
	
	/* for(i=1; i<=10; i++){
	printf("Your %d number: %d \n",i,num[j]);
	j++;
    } */
	
	return 0;
}
