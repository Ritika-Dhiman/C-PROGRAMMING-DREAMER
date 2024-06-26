#include <stdio.h>
  int one_to_thirty(){
  for(int i= 1 ; i<=30; i++){
    printf("%d\n", i);
  }
}

  int multiply(){
    int mul=1;
    for(int i= 1 ; i<=30; i++){
        mul=mul*i;
        printf("%d\n", mul);

  }

}

int main(){
   // one_to_thirtyy();
    multiply();
    return 0;
    }
