#include <stdio.h>
  void swapping(){
  int a=30;
  int b=47;
  int c=56;
  printf("Value before swapping : %d, %d, %d\n", a,b,c);
  int temp=a;
  a=b;
 b= temp;
  printf("Value after swapping : %d, %d, %d\n", a,b,c);
 }





 //nested if else


 void nested_if_else(){
 int a=91;
 if (a>=95){
    printf("CONGRATULATIONS, You have qualified JEE MAINS!!!");
 }
    else{
    printf("We're UNFORTUNATE to say but you didn't qualife JEE MAINS...\n");
    printf("Sorry!");
 }
}




 //assignment operators

 void assignment_opr(){
 int a= 7;
 a+=31;
 printf("Value of a after adding : %d\n", a);

 }


//leap year

  void leap_year(){
  int leap__year;
  printf("Enter your year : ");
  scanf("%d", &leap__year);

  if (leap__year%4==0){
    printf("That's a leap year\n");
  }
  else{
    printf("That's not a leap year");
  }
  }
 int main(){
 //swapping();
 //nested_if_else();
 //assignment_opr();
  leap_year();
 return 0;
 }
