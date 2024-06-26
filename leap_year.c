#include <stdio.h>
 void year(){
     int year;
   printf("Enter the year : \n");
   scanf("%d", &year);

   if (year%4==0){
   printf("This is a LEAP YEAR");
   }
   else {
    printf("This is not a LEAP YEAR");
   }
 }
   int main(){
   year();
   return 0;
   }
