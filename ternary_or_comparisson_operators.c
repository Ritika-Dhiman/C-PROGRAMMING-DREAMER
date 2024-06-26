// ?= ternary operator/ conditional operator

#include <stdio.h>
int ternary_opr(){
    int stu_marks=80;
    char grade;
    grade = (stu_marks>80)  ?  'P' : 'F' ;
    printf("%c", grade);
}

//hum yha pr pura pass ya fail word nhi likh skye kyuki char sirf single bytes ka hota h yani ki a,b,c ese or pass or fail jese lambe words string m aate h
int main(){
    ternary_opr();
    return 0;
}
