#include<stdio.h>

void int_data_type(){
   short int a=123455;
    printf("Size of int: %zu bytes\n", sizeof(a));
    printf("value of a %d\n",a);


}

int main(){
    int_data_type();
    return 0;
}
