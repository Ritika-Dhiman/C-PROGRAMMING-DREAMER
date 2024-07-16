#include <iostream>
using namespace std;

class Person{
public:
    string name;
    int age;
   long long int mob_no;  //long long int ye sb modifiers hote h

public:
    //Default constructor
    Person(){            //yaha pr person isliye aaya kyuki constructor is same as name of the class
    name="Ritika";
    age=18;
    mob_no=9711726363;
    }

    void display(){
    cout<<
    "Name:"<<name<<
    "\nAge:"<<age<<
    "\nMob_no:"<<mob_no<<endl;
    }
};

int main(){
Person p1;
p1.display();
}
