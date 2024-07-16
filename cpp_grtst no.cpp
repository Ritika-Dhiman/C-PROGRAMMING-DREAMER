#include <iostream>
using namespace std;

int greatest_num(){
int num1;
int num2;
int num3;

cout << "Enter your first number here: ";
cin >> num1;

cout << "Enter your second number here: ";
cin >> num2;

cout << "Enter your third number here: ";
cin >> num3;

if ((num1>num2) && (num1>num3)){
cout<< "FIRST number is the greatest number among the three";
}
else if ((num1>num2) && (num1>num3)){
cout<< "SECOND number is the greatest number among the three";
}
else {
cout<< "THIRD number is the greatest number among the three";
}

}

int main(){
greatest_num();
return 0;
}
