#include <stdio.h>
    int prime_num(){
    int num;
    printf("Enter you number : ");
    scanf("%d", &num);
    for(int i= 0; i<=100; i++){
    if (i%2==0 || i%3==0 || i%5==0 || i%7==0 || i%11==0 || i%13==0 || i%17==0 || i%19==0 ) {

    printf("This is a PRIME number");
    }

    else{
        printf("This is NOT a PRIME number");
    }
    }
}

    int main(){
    prime_num();
    return 0;
        }
