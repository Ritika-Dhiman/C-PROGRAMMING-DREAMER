#include <stdio.h>
  int sum_one(){

  int user_num;
  int sum=0;
  printf("Enter your number : ");
  scanf("%d",&user_num);
  for (int a=1; a<=user_num ; a++){
    sum=sum+a;

  }
  printf("Result of Sum :%d",sum);
  }

int main(){
    sum_one();
    return 0;
    }
