#include<stdio.h>
#include<ctype.h>
#define size 10
int main(){
  char letter[size];
  int i;
  printf("Write and wait(only 10 letter): \n");
  for(i=0; i<size; ++i){
      letter[i] = getchar();
  }
  printf("Uppercase value: \n");
  for(i=0; i<size; ++i){
      putchar(toupper(letter[i]));
  }
    return 0;
}