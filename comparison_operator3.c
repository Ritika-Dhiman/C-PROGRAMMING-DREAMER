#include <stdio.h>

void check_marks(){
  int stu_age=15;
  int elig_age=18;

  if (stu_age>elig_age){
     printf("You are eligible for voting");
  }
  else{
    printf("You are not eligible for voting");
  }

  }

  int main(){
  check_marks();
  return 0;
      }
