#include <stdio.h>

int one_to_ten(){
    int i=0;
    while (i<=20){
        printf("%d\n", i);

    i++;   //ye i++ hmesha while loop ke andr hi rhega otherwise ye infinite tk chalajayega
    }
}




int table(){
   int i=1;
   while (i<=10){
        int res= i*2;
    printf(" %d\n", res);
    i++;
   }
   }
int main(){
//one_to_ten();
table();
return 0;
}
