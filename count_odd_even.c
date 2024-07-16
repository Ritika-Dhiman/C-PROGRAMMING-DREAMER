#include <stdio.h>

  void odd_even(){
       int number;
  printf("Enter your number here: \n");
  scanf("%d",&number);


  int count_even=0;
  int count_odd=0;

  for(int i=0; i<=number; i++){
  if(i%2==0){
    printf("The number is EVEN: %d\n", i);
    count_even++;
  }
  else{
    printf("The number is ODD: %d\n",i);
    count_odd++;
  }
  }
  printf("Total EVEN numbers: %d\n", count_even);
  printf("Total ODD numbers: %d\n1", count_odd);
  }
  int main(){
  odd_even();
  return 0;
  }
