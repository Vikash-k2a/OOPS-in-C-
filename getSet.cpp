#include<iostream>
using namespace std;
class cricket{
public:
    int runs;
    float avg;
    cricket (){ //default constructor
    }
    cricket (string n, int r, float a){ //constructor
        name=n;
        runs=r;
        avg=a;
    }
    void display(){
        cout <<this->name<<" "<<this->runs<<" "<<this->avg<<endl;
    }
    string get_name(){
        return name;
    }
    void set_name(string name){
        this->name=name;
    }
private :
    string name;
};

int main (){
    cricket c2("rohit",1500,55.2);
    cout<<c2.get_name()<<endl;
    c2.set_name("dilbur");
    c2.display();
    return 0;
}