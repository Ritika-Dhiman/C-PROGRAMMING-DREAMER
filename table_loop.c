#include <stdio.h>

 int table_loop(){
    int i=1;
    while(i<=10){
    int res= 7*i;
    printf("7 x %d : %d \n", i, res);
    i++;
    }

 }

 int main(){
 table_loop();
 return 0;
 }
