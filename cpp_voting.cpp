#include <iostream>
using namespace std;

int voting(){
int candidate_age;
int eligibility_age=18;

cout<< "Enter your age: ";
cin>> candidate_age;

if(candidate_age>=eligibility_age){
    cout<<"You're eligible to vote";
}
    else {
        cout<<"You're not eligible to vote";
    }
}

int main(){
voting();
return 0;
}
