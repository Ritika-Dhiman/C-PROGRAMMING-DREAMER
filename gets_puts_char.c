#include <stdio.h>

int gets_puts(){
    char str[1];
    printf("Enter a line of text : ");
    gets(str);
    printf("You entered : ");
    puts(str);
    }

    int main(){
    gets_puts();
    return 0;
    }
