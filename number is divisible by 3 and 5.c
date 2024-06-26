#include <stdio.h>

  void num_div_by_3_5(){
      int num;
  printf("Enter your number :");
        scanf("%d", &num);

  if (num%3==0 && num%5==0){
    printf("Your number is divisible by 3 and 5");
  }
  else {
    printf("FALSE");
  }
   }


   int main (){
   num_div_by_3_5();
   return 0;
   }
