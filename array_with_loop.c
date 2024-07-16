#include <stdio.h>


int first_array(){
    int my_arr[5];
    my_arr[0]=100;
    my_arr[1]=200;
    my_arr[2]=300;
    my_arr[3]=400;
    my_arr[4]=500;
    my_arr[5]=600;
    //printf("my_arr[0]= %d\n", my_arr[4]);

    for(int i=0; i<5; i++){
        printf("my_arr[%d] = %d\n", i, my_arr[i]);

        //my_arr[0]=700;
    }
}





  int second_array(){
  int marks[5]={35,45,55,65,75};    //it is a method to write every element in one go
  printf("%d", marks[0]);
  }





  int third_array(){
  int marks[5]={35,45,55,65,75};
  int size=sizeof(marks)/sizeof(marks[0]);   //agr m yha pr sizeof(marks[0] se divide nhi krti toh yha pr sirf 20 aayega size because jo humne marks
                                             //enter kre h vo int type h nd every int= 4 bytes so 5marks= 5*4=20
  printf("Size of marks : %d\n", size );

  for (int i=0; i<size; i++){
    printf("marks %d\n", marks[i]);
  }
  }
    int main(){
   // first_array();
    //second_array();
    third_array();
    return 0;
    }
