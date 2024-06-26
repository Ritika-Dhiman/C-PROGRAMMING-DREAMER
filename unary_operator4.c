#include <stdio.h>

int unary_opr(){
    int x=10;
    int y=20;
    int z;

    z=++x;
    printf("value of z : %d\n", z);
    printf("value of z : %d\n", ++z);
    printf("value of z : %d\n", ++z);
    printf("value of x : %d\n", ++x);


    }

    int main(){
    unary_opr();
    return 0;
    }
