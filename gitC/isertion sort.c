#include <stdio.h>
#include<math.h>
//code by krish
void display(int arr[], int size){
  for(int i = 0; i < size; i++){
    printf("%d ", arr[i]);
  }
  printf("\n");
}
void insertionSort(int arr[], int size){
  for (int step = 1; step < size; step++){
    int key = arr[step];
    int j = step - 1; 
    while(key < arr[j] && j >= 0){
      arr[j + 1] = arr[j];
      --j;
    }
    arr[j + 1] = key;
  }
}
int main() {
  int list[10], i;
  for(i=0; i<10; i++){
  	printf("Enter %d no element: ",i+1);
    scanf("%d",&list[i]);
  }
  int size = sizeof(list) / sizeof(list[0]);
  insertionSort(list, size);
  printf("Sorted order is = \n");
  display(list, size);
  
  return 0;
}