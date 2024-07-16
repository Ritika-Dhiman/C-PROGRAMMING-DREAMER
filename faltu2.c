#include <stdio.h>
   int multiply(){
   int array[7];
   array[0]=2;
   array[1]=4;
   array[2]=6;
   array[3]=1;
   array[4]=3;
   array[5]=5;
   array[6]=7;
   array[7]=8;


   int res=1;
   for(int i=0; i<7; i++){
        res*=array[i];
    printf("Multiplication is : %d\n",res);
   }
   }

   int main(){
   multiply();
   return 0;
   }
