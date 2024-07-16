#include<iostream>
using namespace std;

class Person{
public :
    string name;
    int age ;
    long long int mob_no;  //long long int ye sb modifiers hote h

public :
    // Parameterized constructor.    //yaha pr person isliye aaya kyuki constructor is same as name of the class
    Person(const string& name ,int age ,long long int mob_no){
        // this is a keyword that refers to the pointer to the current object it is used within a
        // class to refer the instance of the object on which member function called
        this->name=name;
        this->age=age;
        this->mob_no=mob_no;
    }
//"this" constructor point ka kaam hota h ki ye boht sare objects m se kisi ek ke uper kaam krta h jispr hum chahte h jese ki ek class m 5 bache
//h or sbke apne apne data h jese ki name, age, marks; to ek sth 5ancho bacho ka nhi kr skte, ek ek krke krna pdega to ye this constructor vhi kaam aata h
    void display(){
        cout <<

        "Name :"<< name <<
        "\nAge :"<< age <<
        "\nMobile :"<< mob_no <<endl;
    }
};

int main(){
    Person p1("Randeep",16,897687678);
    p1.display();
    Person p2("Utkarsh",18,89789879897);
    p2.display();
    return 0;
}
