#include <stdio.h>
  int odd_num(){
  int i;
  for(i=1 ; i<=30 ; i+=2){
    printf("%d\n", i);
  }
}

int main(){
    odd_num();
    return 0;
    }
