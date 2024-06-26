#include <stdio.h>

void int_data_type(){

int a=20;
int b=30;
printf("value Before swapping %d,%d",a,b);
int temp =a;
a=b;
b=temp;
printf("value After swapping %d,%d",a,b);
}
int main(){
 int_data_type();
return 0;
}
