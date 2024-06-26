#include <stdio.h>

   void check_age(){
   int stu_age=13;

   if (stu_age>=18){
    printf("You are eligible for voting");
   }
    else{
        printf("You are not eligible for voting");
    }
   }



   int main (){
   check_age();
   return 0;
}

