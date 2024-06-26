   //AND (&&) or (||) or NOT (!) function

   //&& ek bhi false condition to sara false
   //|| ek bhi true to sara true
   // ! result ko opposite krdeta h


#include <stdio.h>

   void and_opr(){
   int a=5, b=10;
   if( a>5 && b > 5 && a==5){
      printf("Both conditions are true\n");
   }
   else{
    printf("Not true");
   }
   }
   int main (){
        and_opr();
        return 0;
        }



