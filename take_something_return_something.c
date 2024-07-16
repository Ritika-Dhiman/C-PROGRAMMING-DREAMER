#include <stdio.h>


 int sum(int a, int b){    //yha pr int hi use hota h because void kbhi bhi return nhi krta h kuch
 int res= a+b;

 return res;   //agr sara result vapas krta hota h to "return res" or last m "int total" aata h
 }


 int main(){
     int num1=10 , num2=30;

     int total= sum(num1,num2);   //arguments
     printf("Result : %d", total);

     return 0;
     }
