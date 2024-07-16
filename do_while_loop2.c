#include <stdio.h>
 int one_to_ten_do(){
    int i=10;  //mne yha pr i=10 set krdiya h to humara ye code run to krega lekin ye bs 10 hi value dikhayega kyuki
    do{
        printf("%d\n",i);
        i++;
    }while(i>10);    //yha pr ye condition fulfil nahi ho rhi h
 }

   int main(){
   one_to_ten_do();
   return 0;
 }
