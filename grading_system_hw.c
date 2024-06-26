#include <stdio.h>
 int grading_marks(){
     int stu_marks;
     printf("Enter your marks :\n");
     scanf("%d",&stu_marks);
     char grade;
     grade= (stu_marks>90) ? 'A' :  (stu_marks<50) ? 'B': 'F' ;
     printf("%c", grade);

     }

     int main(){
     grading_marks();
     return 0;
     }
