#include <stdio.h>


int first_array(){
   int my_arr[5];
    my_arr[0]=100;
    my_arr[1]=200;
    my_arr[2]=300;
    my_arr[3]=400;
    my_arr[4]=500;
    my_arr[5]=600;
    printf("my_arr[0]= %d\n", my_arr[4]);
}

int main(){
    first_array();
    return 0;
    }
