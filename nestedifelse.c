//chaining

#include <stdio.h>

int nested_ifelse(){
    int a=10;
    if (a>10){
        printf("I can execute \n");
    }
    else{
        printf("I cannot execute \n");
    }

}

int main(){
    nested_ifelse();
    return 0;
    }
