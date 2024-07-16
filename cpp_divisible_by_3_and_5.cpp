#include <iostream>
using namespace std;

int divisible_by_3_and_5(){
int num;


cout<<"Enter your number here: ";
cin>>num;

if ((num%3==0) && (num%5==0)){
    cout<<"Number is divisible by both 3 and 5";
}

else if (num%3==0){
        cout<<"Number is divisible by 3";
}

else if (num%5==0){
    cout <<"Number is divisible by 5";
}

else {
    cout<<"Number is neither divisible by 3 nor by 5";
}
}

int main(){
divisible_by_3_and_5();
return 0;
}
