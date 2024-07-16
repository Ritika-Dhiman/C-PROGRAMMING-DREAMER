#include <stdio.h>
  int table(){
  int i=1;
  do{
       int res=i*2;
    printf(" %d", res);
    i++;   //ye ++ isliye lgaya h taaki ye i ko + krta jaye i.e i=2 ; 2*2
  }while (i<=10);
}


int main(){
    table();
    return 0;
    }
