#include <stdio.h>
    void check_multipleif(){
        int num;
        printf("Enter your number :");
        scanf("%d", &num);


        if (num>80){
            printf("Grade A\n");
        }
        if (num>60){
            printf("Grade B\n");

        }
        if (num>500){
            printf("Grade C\n");
        }
        if (num>40){
            printf("Grade D\n");
        }

    }

//2nd example

     void check_multiple_else_if(){
     int num=91;

     if (num>=90){
        printf("A+");
     }
     else if (num>=80){
        printf("A");
     }
     else if (num>=70){
        printf("B");
     }
     else if (num>=60){
              printf("C");
     }
     else
        printf("FAIL");
     }





int main (){
        check_multipleif();
        check_multiple_else_if();
        return 0;
        }
