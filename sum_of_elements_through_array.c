#include <stdio.h>

  int array(){

  int my_array[5];
    my_array[0]=1;
    my_array[1]=2;
    my_array[2]=3;
    my_array[3]=4;
    my_array[4]=5;
    my_array[5]=6;

  int res= 1;
  for(int i=0; i<=5; i++){
        res+=my_array[i];
    printf("sum is %d\n",res);

  }
  }

  int main(){
  array();
  return 0;
  }
