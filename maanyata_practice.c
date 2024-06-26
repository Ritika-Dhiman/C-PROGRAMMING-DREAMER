



#include<stdio.h>
void int_data_type(){
     long long int a=1234567890121;
     printf("Size of int: %zu bytes\n", sizeof(a));
     printf("Value of a %lld\n",a);
}


void add(){
     int a= 2;
     int b=3;
     int c=a+b;
     printf("%d", c);

}

int main(){
    int_data_type();
    add();
    return 0;
}














