#include <stdio.h>
    void check_even_odd(){
    int num;
     printf("Enter your number :");
     scanf("%d", &num);

   if (num%2==0){
   printf("The number is EVEN");
   }
    else {
        printf("The number is ODD");

    }
    }

    int main(){
    check_even_odd();
    return 0;
    }
