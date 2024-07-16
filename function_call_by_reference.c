#include <stdio.h>

int swap(int *var1 , int *var2){
    int temp=*var1;
    *var1=*var2;
    *var2=temp;  //reference m address daalte h nd jo adress hota h vo pointers save krte h (pointers=*) isliye function by value m hum star use nhi krte lekin function by reference m krte h

}

int main(){
    int var1=20 , var2=30;
    printf("Before swapping var1 and var2 : %d,%d\n", var1, var2);

    swap(&var1, &var2);
    printf("After swapping var1 and var2 : %d,%d\n", var1, var2);

    return 0;
    }
