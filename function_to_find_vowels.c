#include <stdio.h>
int check_vowels(){
char letter_entered;
printf("Enter your letter :");
scanf("%c", &letter_entered);

if( (letter_entered== 'a') || (letter_entered=='e' ) || (letter_entered ==  'i' ) || (letter_entered== 'o' ) || ( letter_entered =='u' )
   ||(letter_entered|| 'A') || (letter_entered == 'E' ) || (letter_entered == 'I') || (letter_entered == 'O' ) ( letter_entered == 'U') ){

    printf("It is a VOWEL");
    }
    else {
        printf("It is a CONSONANT");
    }
}

int main(){
check_vowels();
return 0;
}
