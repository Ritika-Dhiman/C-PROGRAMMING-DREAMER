#include<stdio.h>

int odd_even(){
    int user_num;
    printf("Enter your Num :");
    scanf("%d",&user_num);
    int count_even=0;
    int count_odd=0;
    for (int i=1; i<=user_num; i++){
        if (i%2==0){
            printf("Even :%d\n",i);
            count_even++;
        }
        else{
            printf("Odd :%d\n",i);
            count_odd++;

        }
    }

    printf("Total Even : %d\n",count_even);
    printf("Total Odd : %d\n",count_even);
}

int main(){
    odd_even();
    return 0;
}
