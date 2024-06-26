#include <stdio.h>

int unary_opr(){
    int x=10;
    int y=20;
    int z;

    z=--y;
    printf("value of z : %d\n", z);
    printf("value of z : %d\n", ++z);
    printf("value of z : %d\n", ++z);
    printf("value of x : %d\n", x);

    // agr yha pr last m x ki jgh y likh dete to ans 19 aata


}
    int main(){
    unary_opr();
    return 0;
    }
