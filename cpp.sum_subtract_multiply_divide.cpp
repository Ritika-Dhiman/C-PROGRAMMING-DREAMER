#include <iostream>
using namespace std;

int sum(){
int num1;
int num2;
int res;

cout<<"Enter you number 1 here: ";
cin>>num1;

cout<<"Enter you number 2 here: ";
cin>>num2;

res=num1+num2;
cout<<"The sum is: "<<res;
}



int subtract(){
int num1;
int num2;
int res;

cout<<"Enter you number 1 here: ";
cin>>num1;

cout<<"Enter you number 2 here: ";
cin>>num2;

res=num1-num2;
cout<<"The answer is: "<<res;
}



int multiply(){
int num1;
int num2;
int res;

cout<<"Enter you number 1 here: ";
cin>>num1;

cout<<"Enter you number 2 here: ";
cin>>num2;

res=num1*num2;
cout<<"The ans is: "<<res;
}



int divide(){
int num1;
int num2;
int res;

cout<<"Enter you number 1 here: ";
cin>>num1;

cout<<"Enter you number 2 here: ";
cin>>num2;

res=num1/num2;
cout<<"The ans is: "<<res;
}
int main(){
    //sum();
    //subtract();
    //multiply();
    divide();
return 0;
}
