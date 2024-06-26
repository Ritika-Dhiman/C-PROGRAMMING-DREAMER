#include <stdio.h>

  void grt_num(){
  int num1,num2, num3;
  printf("ENTER YOUR THREE NUMBER: ");
  scanf("%d %d %d", &num1, &num2, &num3);


  if ((num1>num2) && (num1>num3)){
  printf("NUM1 is greatest");
  }

  else if ((num2>num3) && (num2>num1)){
  printf("NUM2 is greatest");
  }

  else {
  printf("NUM3 is greatest");
  }

  }
  int main(){
  grt_num();
    return 0;
  }
