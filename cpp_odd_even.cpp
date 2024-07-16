#include <iostream>
using namespace std;

int odd_even(){
int element;

cout<<"Enter your number here: ";
cin>>element;

if (element %2==0){
    cout<<"Number is EVEN";
}
else{
    cout<<"Number is ODD";
}
      }

      int main(){
      odd_even();
      return 0;
      }
