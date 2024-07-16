#include <stdio.h>


 int sum(int a, int b){
 int res= a+b;
 char c= 'D';
 return res;
 return c;   //ek return use krne ke baad m kitne bhi return use krlu frk nhi pdhta kyuki programme sirf first return ko hi dekhega
 }


 int main(){
     int num1=10 , num2=30;

     int total= sum(num1,num2);   //arguments
     printf("Result : %d", total);   // agar m yha pr %c bhi likh deti hu mera programme tb bhi run krega, garbage value dega pr dega
                                     //yhi iss function ki speciality h ki ye kuch bhi value dega hi dega
     return 0;
     }
