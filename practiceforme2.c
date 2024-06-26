    #include <stdio.h>

    void check_marks(){
       int stu_marks= 28;
       int pass_marks= 30;

    if (stu_marks >= 30){
        printf("Congratulations\n");
        printf("You've PASSED the examination");

    }

    else {
         printf("Oops!\n");
         printf("Sorry to say but you have FAILED the examination");

    }
    }

    int main (){
    check_marks();
    return 0;
    }



