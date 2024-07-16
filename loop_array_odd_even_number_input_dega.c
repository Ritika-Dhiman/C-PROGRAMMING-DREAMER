#include <stdio.h>

int main(){
    int num_of_ele;

    printf("Enter you number of elements in the array : ");
    scanf("%d", &num_of_ele);

    int my_arr[num_of_ele];

    for (int i=0; i<num_of_ele; i++){
         printf("Enter element %d:", i+1);
         scanf("%d", &my_arr[i]);
    }

    for(int i=0; i<num_of_ele; i++){
         printf("%d", my_arr[i]);
    }
}
