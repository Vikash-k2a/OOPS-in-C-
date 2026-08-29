#include<iostream>
using namespace std;
class cricket{
public:
    string name;
    int runs;
    float avg;
    cricket (){ //default constructor
    }
    cricket (string n, int r, float a){ //constructor
        name=n;
        runs=r;
        avg=a;
    }
    // this keyword
    cricket (string name, int run){
        this->name=name;
        this->runs=run;
    }
    void display(){
        cout <<this->name<<" "<<this->runs<<" "<<this->avg<<endl;
    }
};
// pass by value
void display(cricket c){
    c.name="sachin";
    cout <<c.name<<" "<<c.runs<<" "<<c.avg<<endl;
}
// pass by reference
void print(cricket* c){
    c->name="tendulkar";
    cout <<c->name<<" "<<c->runs<<" "<<c->avg<<endl;
}

int main (){
    // DYNAMIC ALLOCATION
    cricket* c1 = new cricket("virat",4500,45.9);
    cricket* c2 = new cricket[1];
    c2->avg=55.2;
    c2->name="rohit";
    c2->runs=1500;
    cricket c3("dhoni",1500);
    c3.avg=12.5;
    c1->display();
    //print(c2);
    c2->display();
    delete c1;
    delete[] c2 ;

    return 0;
}