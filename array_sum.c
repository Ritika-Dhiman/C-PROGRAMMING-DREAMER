#include <stdio.h>

int arr_sum(int arr[], int size){
    int sum=0;

    for (int i=0; i<size; i++){
     sum+= arr[i];
    }
    return sum;
    }

    int main(){
    int arr[]={1,2,3};

    int size=sizeof(arr)/sizeof(arr[0]);

    int sum= arr_sum(arr,size);

    printf("Sum :%d",sum);
    return 0;
}
