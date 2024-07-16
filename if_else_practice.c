#include <stdio.h>

  void check_marks(){
  int stu_marks = 64;

  if (stu_marks>=75){
    printf("Congratulations, you have passed the exam writing criteria");
  }
    else {
        printf("Oops! Looks like you'll have to try again\n");
        printf("Good Luck\n");
    }

}





 void check_stu_marks(){
 int marks;
 printf("Enter you marks : \n");
 scanf("%d", &marks);

 if (marks>=75){
    printf("Congratulations, you have passed the exam writing criteria");
  }
    else {
        printf("Oops! Looks like you'll have to try again\n");
        printf("Good Luck\n");
    }

 }







 void check_chances(){
 int Physics = 75;
 int Chemistry = 60;
 int Maths = 84;

   if ((Physics > Chemistry && Physics > Maths)){
    printf("You got highest in PHYSICS");
   }
   else if ((Chemistry > Physics && Chemistry > Maths)){
    printf("You got highest in CHEMISTRY");
   }
   else{
    printf("You got highest in MATHS");
   }
 }







 void opr_greatest_num(){
 int num1;
 int num2;
 int num3;
 int num4;
 int num5;

 printf("Enter your 5 numbers : ");
 scanf("%d %d % %d %d %d", &num1, &num2, &num3, &num4, &num5);

 if ((num1>num2 && num1>num3 && num1>num4 && num1>num5)){
 printf("NUMBER 1 is the greatest number among the five numbers");
 }
 else if ((num2>num1 && num2>num3 && num2>num4 && num2>num5)){
 printf("NUMBER 2 is the greatest number among the five numbers");
 }
 else if ((num3>num1 && num3>num2 && num3>num4 && num3>num5)){
 printf("NUMBER 3 is the greatest number among the five numbers");
 }
 else if ((num4>num1 && num4>num2 && num4>num3 && num4>num5)){
 printf("NUMBER 4 is the greatest number among the five numbers");
 }
 else {
    printf("NUMBER 5 is the greatest number among the five numbers");
 }
 }

int main(){
    //check_marks();
    //check_stu_marks();
    //check_chances();
    opr_greatest_num();
    return 0;
}
