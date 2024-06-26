#include <stdio.h>

   void check_chances(){

       int VIT_Vellore=50;
       int Manipal_Jaipur=30;
       int UPES_Dehradun=20;

       if ((VIT_Vellore > Manipal_Jaipur) && (VIT_Vellore > UPES_Dehradun)){
        printf("This is Vit Vellore \n");
       }
       else if ((Manipal_Jaipur> VIT_Vellore) && (Manipal_Jaipur > UPES_Dehradun)){
        printf("This is manipal \n");
       }
       else{
        printf("This is UPES \n");
       }
   }

        int main(){
        check_chances();
        return 0;
        }
