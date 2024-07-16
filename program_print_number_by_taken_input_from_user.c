#include <stdio.h>

   int print_num(){
   int user_num;
   printf("Enter your number : ");
   scanf("%d" ,&user_num);

   for (int i=0 ; i<user_num ; i++){
   printf("Numbers are : %d\n", i);
   }
   }

   int main(){
   print_num();
   return 0;
   }
