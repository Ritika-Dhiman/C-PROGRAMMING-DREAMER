#include <stdio.h>
int checked_even_odd(){
   int num;

      printf("Enter your number : \n", num);
   scanf("%d",&num);


   if(num%2==0) {
    printf("The number is EVEN");
   }
   else{
    printf("The number is ODD");
   }
}

int main(){
    checked_even_odd();
    return 0;
    }
