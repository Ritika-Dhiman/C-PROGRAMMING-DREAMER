#include <stdio.h>
   int break_loop(){
   for(int i=0; i<=15; i++){
    if (i==8) {
        break;
    }
    printf("%d ",i);
   }
   }




   int break_cont_loop(){
   for(int i=0; i<=15; i++){
    if (i==5 || i==8) {
        //break;
        continue;
    }
    printf("%d ",i);
   }
   }




   int main(){
   //break_loop();
   break_cont_loop();
   return 0;
   }
