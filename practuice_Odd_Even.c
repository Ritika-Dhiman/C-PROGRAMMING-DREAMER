#include <stdio.h>

int odd_even(){
    int user_num;

    printf("Enter you number : ");
    scanf("%d", &user_num);
    int count_even=0;
    int count_odd=0;
    for (int i=1 ; i<=user_num ; i++){
        if (i%2==0){
            printf("The number is EVEN : %d\n", i);
            count_even++;
        }
        else {
            printf("The number is ODD : %d\n", i);
            count_odd++;
        }
        }
        printf("Total EVEN numbers : %d\n", count_even);
        printf("Total ODD numbers : %d\n", count_odd);
        }

        int main(){
        odd_even();
        return 0;
        }
