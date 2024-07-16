#include <stdio.h>

int search_odd_even(int arr[], int size){

    for (int i=0; i<size; i++){

        if(arr[i]%2==0){
            printf("%d is an even number \n",arr[i]);
        }

   }

   }

   int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};

    int size=sizeof(arr)/sizeof(arr[0]);

    search_odd_even(arr, size);

    return 0;
   }
