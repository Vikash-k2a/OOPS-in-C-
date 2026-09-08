#include <iostream>
using namespace std;
class IIITS {
public:
    void life(){
        cout << "PERMANENT CAMPUS CONSTRUCTION IS ONGOING." << endl;
    }
    IIITS(){
        cout<<"A IS CONSTRUCTED"<<endl;
    }
    ~IIITS(){
        cout<<"A IS DESSTRUCTED"<<endl;
    }
};
//single inheritance
class academic : virtual public IIITS{
public:
    //function overloading
    void study(){
        cout << "STUDENTS ARE STUDYING IN TEMPORARY CAMPUS." << endl;
    }
    void study(int year){
        cout << "Students are studying in SBIT campus since " <<2026-year<< " years" << endl;
    }
    academic(){
        cout<<"B IS CONSTRUCTED"<<endl;
    }
    ~academic(){
        cout<<"B IS DESSTRUCTED"<<endl;
    }
};
//multiple inheritance
class non_academic : virtual public IIITS{
public:
    void fee(){
        cout << "HAVE YOU PAID YOUR SEMESTER FEES." << endl;
        bool i;
        cin >>i;
        if(i){
            cout <<"THANK YOU"<< endl;
        }
        else{
            cout <<"Please pay the semester fee ASAP."<< endl;
        }
    }
    non_academic(){
        cout<<"C IS CONSTRUCTED"<<endl;
    }
    ~non_academic(){
        cout<<"C IS DESSTRUCTED"<<endl;
    }
};
//multilevel inheritance
class department : public academic, public non_academic{
public:
    void dept(){
        cout << "THERE ARE 3 DEPARTMENT IN IIIT SONEPAT." << endl;
    }
    department(){
        cout<<"D IS CONSTRUCTED"<<endl;
    }
    ~department(){
        cout<<"D IS DESSTRUCTED"<<endl;
    }
};

int main(){
    department dsa;
    dsa.study();
    dsa.study(2014);
    dsa.life();
    dsa.fee();
    dsa.dept();
    return 0;
}