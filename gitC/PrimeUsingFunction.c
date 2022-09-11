#include<stdio.h>
int prime(int a){
	int i,j=0;
	for(i=a-1; i>=2; i--){
		if(a % i == 0){
			j = 1;
		}
	}
	if(j == 0){
		printf("prime");
	}else{
		printf("Non Prime");
	}
}
int main(){
	int num;
	printf("Enter the number: ");
	scanf("%d",&num);
	prime(num);
	return 0;
}
