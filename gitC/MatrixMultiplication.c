#include<stdio.h>
int main(){

int i, j, k, c[3][3], a[3][3], b[3][3];

	printf("1st matrix is here: \n");
	for(i=0; i<=2; i++){
	  for(j=0; j<=2; j++){
		printf("Enter (%d,%d) position element= ",i,j);
		scanf("%d",&a[i][j]);
	  }
	}
	printf("--------------------------------\n Matrix 1 is: \n\n");
	for(i=0; i<=2; i++){
	  for(j=0; j<=2; j++){
		printf(" %d ",a[i][j]); 
	  }
	   	     printf("\n");
	}
   printf("\n2nd matrix is here: \n");
	for(i=0; i<=2; i++){
	  for(j=0; j<=2; j++){
		printf("Enter (%d,%d) position element= ",i,j);
		scanf("%d",&b[i][j]);
	  }
	}
	printf("--------------------------------\n Matrix 2 is: \n\n");
	for(i=0; i<=2; i++){
	  for(j=0; j<=2; j++){
		printf(" %d ",b[i][j]);
	  }
	   	     printf("\n");
	}

for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        for(k=0;k<3;k++){
            c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
        }
    }
    
}
printf("--------------------------------\n Result is: \n\n");
  	for(i=0; i<=2; i++){
		for(j=0; j<=2; j++){
			printf(" %d ",c[i][j]);
		}
	   	     printf("\n");
	}
	

 return 0;
}
