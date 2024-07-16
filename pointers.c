#include <stdio.h>
//A pointer is a variable that stores the memory address of another variable rather than holding the data value.
//A pointer holds the address where the data is stored.


int main(){

int x=10;

int *ptr;  //Declaration of a pointer

ptr=&x; //staring m 1st time ptr ke sth star lgana pdta h kyuki ek baar usko value assign krni zruri h or next line m humne x ka adrress store kra h ptr m isliye star nhi lgaya dubara

printf("Value of x : %d\n", *ptr);

*ptr=20;

printf("New value of x : %d", *ptr);  //yha *ptr ke akava x bhi likh denge to ans sahi aayega

}
