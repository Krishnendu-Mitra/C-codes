#include<stdio.h>
#include<stdlib.h>
//code by c
struct student{
	char name[20];
	int roll;
	float marks;
}s1[50];

int main(){
	
	int i=0,j=0;
	
	for(i=1; i<=50; i++){
	printf("Enter your student name: ");
	scanf("%s",&s1[j].name);
	printf("Enter your student roll: ");
	scanf("%d",&s1[j].roll);
	printf("Enter your student marks: ");
	scanf("%f",&s1[j].marks);
	j++;
    }
	
	printf("----------------------\n");
	
	j = 0;
	
	for(i=1; i<=50; i++){
	printf("Your student name is: %s \n",s1[j].name);
	printf("Your student roll is: %d \n",s1[j].roll);
	printf("Your student marks is: %f \n",s1[j].marks);
	j++;
    }
	
	j = 0;
	
	return 0;
}
