#include <stdio.h>

int swap(int *c1 , int *c2){
    int temp=*c1;
    *c1=*c2;
    *c2=temp;
}

int main(){
    int char;
    int c1='a' , c2='b';
    printf("Before swapping c1 and c2 : %c,%c\n", c1, c2);

    swap(&c1, &c2);
    printf("After swapping c1 and c2 : %c,%c\n", c1, c2);

    return 0;
    }

