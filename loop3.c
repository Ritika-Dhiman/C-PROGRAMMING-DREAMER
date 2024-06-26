#include <stdio.h>

int ten_to_one(){
    for(int i=10; i>0 ; i-- ){
        printf("%d\n" , i);
    }
}

int skip_one(){
    for(int i=1; i<=20 ; i+=2){
        printf("%d", i);
    }
}


int main(){
    ten_to_one();
    skip_one();
    return 0;
    }
