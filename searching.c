#include <stdio.h>

int linear_search(int arr[],int size, int key){

    for (int i=0; i<size; i++);
    int i;
        if (arr[i]== key){
            return i;
        }

    return -1;
}
int main(){
    int arr[]={20,43,90,67,54,31,7,11};

    int size=sizeof(arr)/sizeof(arr[0]);

    int key=67;

    int res=linear_search(arr, size, key);

    if (res==-1){
        printf("Element not found..\n");
        }
        else{
            printf("Element %d found at index %d:\n", key, res);
        }
         return 0;

}
