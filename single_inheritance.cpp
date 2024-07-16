#include <iostream>
using namespace std;
//Base class
class Parent{

public:
   int p_money=5000;
   string p_car_name="volvo";
   string p_home="4bhk";

    void show_pdata(){
   cout<<"Parent Data "<< p_money<<endl;
    }
};

//Derived class
class child : public Parent{               //yha pr sirf class child likha tha pehle to usse hum child or parent ka alg alg nikal skte h lekin agr hume child ko parent m inherit krna h to hume sth m public likhna hoga
public:                                    //yha pr public likhne ka mtlb h ki ye DATA publically access ho skta h jabki uper vale public ka mtlb tha ki child parent ka data use kr ske (inherit kr ske)
   int c_money=500;
   string c_car_name="Nano";
   string c_home="1bhk";                   //money,car etc ye sb data h //parent or child class h  //"c1" child ka object h

void show_cdata(){
   cout<<"Child Data "<<c_money <<endl;
    }
};
int main(){
child c1;
cout<<c1.p_car_name<<endl;
cout<<c1.p_home <<endl;
return 0;
}
