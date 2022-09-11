#include <stdio.h>
#include <stdlib.h>
//code by krish
int main(){
	int arr[9]={8,8,8,8,8,8,8,8,8}, e, i, j, k=0, count=0, step, player=0, temp=0, space=9;
		
			do{
				printf("\tMenu Bar\t\n");
				printf("------------------------\n");
				printf("player 1: 0\nplayer 2: 1\nBlank space: 8\nposition rang: 1 to 9\n");
				printf("------------------------\n");
				printf("Game Start ....\n\n");
				for(i=0; i<=8; i++){
			    	arr[i] = 8;
				}
		        for(i=0; i<=8; i++){
			      printf("\t %d \t",arr[i]);
			      if(i == 2 || i== 5 || i == 8){
				    printf("\n");
				  }
			    }
				e = 200 + 0;
				for(j=0; j<=e; j++){
					  if(j % 2 == 0){
						 player = 1;
						 step = 0;
						}else{
						 player = 2;
						 step = 1;
						}
					  printf("\n %d no player enter the position: ",player);
					  scanf("%d", &k);
					  space--;
					  if(k>9 || k<1){
					  	printf("\n Position not found \n");
					  	e = j + 0;
					  }
					  if(space == 0){
						printf("\nGame Equaly completed!\n");
						e = j + 0;
					  }else{
						count++;
					  }
					  k = k-1;
					  if(arr[k] == 0 || arr[k] == 1){
					    printf(" You are never overlap the value\n");
					    e = j + 0;
					  }else{
					  	count++;
					  }
					  arr[k] = step + 0;
					  for(i=0; i<=8; i++){
						printf("\t %d \t", arr[i]);
						if(i == 2 || i== 5 || i == 8){
							printf("\n");
						  }
						}

						if((arr[0] == 0 && arr[4] == 0 && arr[8] == 0) || (arr[0] == 1 && arr[4] == 1 && arr[8] == 1)){
							printf("\n %d no player is winer\n",player);
							e = j + 0;
						}else if((arr[2] == 0 && arr[4] == 0 && arr[6] == 0) || (arr[2] == 1 && arr[4] == 1 && arr[6] == 1)){
							printf("\n %d no player is winer\n",player);
							e = j + 0;
						}else if((arr[1] == 0 && arr[4] == 0 && arr[7] == 0) || (arr[1] == 1 && arr[4] == 1 && arr[7] == 1)){
							printf("\n %d no player is winer\n",player);
							e = j + 0;
						}else if((arr[3] == 0 && arr[4] == 0 && arr[5] == 0) || (arr[3] == 1 && arr[4] == 1 && arr[5] == 1)){
							printf("\n %d no player is winer\n",player);
							e = j + 0;
						}else if((arr[0] == 0 && arr[3] == 0 && arr[6] == 0) || (arr[0] == 1 && arr[3] == 1 && arr[6] == 1)){
							printf("\n %d no player is winer\n",player);
							e = j + 0;
						}else if((arr[2] == 0 && arr[5] == 0 && arr[8] == 0) || (arr[2] == 1 && arr[5] == 1 && arr[8] == 1)){
							printf("\n %d no player is winer\n",player);
							e = j + 0;
						}else if((arr[6] == 0 && arr[7] == 0 && arr[8] == 0) || (arr[6] == 1 && arr[7] == 1 && arr[8] == 1)){
							printf("\n %d no player is winer\n",player);
							e = j + 0;
						}else if((arr[0] == 0 && arr[1] == 0 && arr[2] == 0) || (arr[0] == 1 && arr[1] == 1 && arr[2] == 1)){
							printf("\n %d no player is winer\n",player);
							e = j + 0;
						}else{
							count++;
						}
					}
					printf("Restart the game(0): ");
					scanf("%d",&temp);
				}while(temp == 0);
			printf("\n\n %c%c%c%c%c say to you- thank you to use my game...\n",75,114,105,115,104);
	return 0;
}