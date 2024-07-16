#include <stdio.h>

  int array_sum(int array[], int size){
  int sum=0;

  for (int i=0; i<size; i++){
  sum+= array[i];
  }
  return sum;
  }

  int main(){

  int arr[]={7,31,2};

  int size= sizeof(array)/sizeof(array[0]);

  int sum= array_sum(array, size);

  printf("Sum : %d", sum);
  return 0;
  }
