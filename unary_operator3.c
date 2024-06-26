#include <stdio.h>

int unary_opr(){
    int x=10;
    int y=20;
    int z;

    z=++x;
    printf("value of z : %d\n", z);
    printf("value of z : %d\n", ++z);
    printf("value of z : %d\n", ++z);
    printf("value of x : %d\n", x);

    //yha pr last row m x ki value 11 aayegi kyuki jab humne z=++x likha to humne already x ko bhi ek value assign krdi joki ++ hojayegi and ++ = 1 value add
    //yha pr agr hum last row m x ki jgh ++x likh denge to fir x ki value ek aur add hokr aayegi i.e 12 (agle code m krke dikhati hu)
    }

    int main(){
    unary_opr();
    return 0;
    }
