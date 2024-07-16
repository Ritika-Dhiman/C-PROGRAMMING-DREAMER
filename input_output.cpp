#include <iostream>

  int first(){
  int num1;
  int num2;

  std::cout << "Enter your  number 1 :";   //c++ m printf ki jgh cout nd cin use krna pdta h
  std::cin>> num1;

  std::cout << "Enter your  number 2 :";   //isme hume baar baar std sth m lgana pdega isse bdiya h ki hum starting m iostream ke baad "using namespace std;" yhi lgade
  std::cin >> num1;

}

int main(){
first();
return 0;
}
