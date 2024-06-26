#include <stdio.h>

   void int_data_type (){
   long int a=128967450;
   printf("size of int: %zu bytes\n" , sizeof(a));
   printf("value of a %ld\n", a);
   }

   int main(){
   int_data_type();
   return 0;
   }
