#include<iostream>
using namespace std;
class scooty{
public:
    int speed;
    float price;
    virtual void sound()=0;
};
class bike : public scooty{
public:
    int gear;
    void sound(){
        cout<<"boom boom"<<endl;
    }
};

int main(){
    scooty* x = new bike();
    x->sound();
    return 0;
}