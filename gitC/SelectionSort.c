#include <stdio.h>

#include <stdlib.h>

//code by krish

void swap(int *a, int *b) {

  int temp = *a;

  *a = *b;

  *b = temp;

}

void selectionSort(int arr[], int n) {

	int j, i, minIndex;

  for (j = 0; j < n - 1; j++) {

      minIndex = j;

    for (i = j + 1; i < n; i++) {

      if (arr[i] < arr[minIndex])

        minIndex = i;

    }

    swap(&arr[minIndex], &arr[j]);

  }

}

void display(int arr[], int n) {

	int i;

  for (i = 0; i < n; i++) {

    printf("%d  ", arr[i]);

  }printf("\n");

}

int main() {

  int arr[10],n, i;

  printf ("Enter the size of list(max size 10): ");

  scanf ("%d",&n);

  for(i=0; i<n; i++){

  	printf ("%d no element = ",i+1);

      scanf ("%d",&arr[i]);

  }

  selectionSort(arr, n);

  printf("Selection shorted: \n");

  display(arr, n);

  return 0;

}
