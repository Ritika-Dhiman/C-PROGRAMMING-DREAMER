#include<stdio.h>

void int_data_type(){
   long long int a=123456789012;
    printf("Size of int: %zu bytes\n", sizeof(a));
    printf("value of a %lld\n",a);


}

int main(){
    int_data_type();
    return 0;
}
