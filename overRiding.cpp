#include<iostream>
using namespace std;
class scooty{
public:
    int speed;
    float price;
    virtual void sound(){
        cout<<"gay gay"<<endl;
    }
};
class bike : public scooty{
public:
    int gear;
    void sound(){
        cout<<"boom boom"<<endl;
    }
};

int main(){
   scooty* x = new bike;
    x->sound();
    //bike b1;
    //b1.sound();
    return 0;
}