#include <iostream>
using namespace std;

int first(){
  int num1;
  int num2;
  int res;

  cout << "Enter your  number 1 :";
  cin>> num1;

  cout << "Enter your  number 2 :";
  cin >> num2;

  res=num1+num2;
  cout << "Result :" << res;
}

int main(){
first();
return 0;
}
