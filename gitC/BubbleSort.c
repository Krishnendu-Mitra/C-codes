#include <stdio.h>
#include <stdlib.h>
//code by krish
void bubbleSort(int arr[], int n){
	int i, temp, cache;
  for (cache = 0; cache < n - 1; ++cache){
    for (i = 0; i < n - cache - 1; ++i){
      if (arr[i] > arr[i + 1]){
         temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
      }
    }
  }
}
void display(int arr[], int n){
	int i;
  for (i = 0; i < n; ++i){
    printf("%d  ", arr[i]);
  }printf("\n");
}
int main(){
  int arr[10],n, i;
  printf ("Enter the size of list(max size 10): \n");
  scanf("%d",&n);
  for(i=0; i<n; i++){
  	printf ("%d no element = ");
      scanf("%d",&arr[i]);
  }
  bubbleSort(arr, n);
  printf("Bubble sorting: \n");
  display(arr, n);
  return 0;
}
