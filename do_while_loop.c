#include <stdio.h>
 int one_to_ten_do(){
    int i=0;
    do{
        printf("%d\n",i);
        i++;
    }while(i>=10);

}

   int main(){
   one_to_ten_do();
   return 0;
 }
