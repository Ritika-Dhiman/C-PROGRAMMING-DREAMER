#include <iostream>
using namespace std;

class Student{
public :  //public ka mtlb h ki hum function ko close krne ke baad bhi hum uss code ko use kr skte h; if private krte outside the function use nhi kr skte
    string name;
    int age;
    string grade;
    int mob_num;
    int marks;

    void show_info(){\
    cout <<
    "Student Name: "<< name<<
    "\nStudent Age: "<<age<<
    "\nStudent Mobile no.: "<<mob_num<<
    "\nStudent Marks: "<<marks<<endl;
    }
};  //class likha h to isliye last m semicolan aayega

int main(){
    Student stu1;
    stu1.name="RANDEEP";
    stu1.age=18;
    stu1.grade="A++";
    stu1.mob_num=9766328641;
    stu1.marks=96;

    cout <<"\n"<< endl;

    Student stu2;
    stu2.name="RITIKA";
    stu2.age=18;
    stu2.grade="A++";
    stu2.mob_num=9711726363;
    stu2.marks=99;


    stu1.show_info();
    stu2.show_info();

    return 0;
}
