#include <stdio.h>

//get char() : used to read a single character from standard input (Usually from the keyboard)

//put char() : used to write a single character to standard output (Usually on the scrren)

int get_char(){
    char my_char;
    printf("Enter a character : ");
    my_char=getchar();
    printf("You entered :");
    putchar(my_char);
}

int main(){
get_char();
return 0;
}
//yha pr koi bhi name enter krenge to sirf uska first letter aayega but if we want to get the whole name then we have to use another function i.e gets and puts
