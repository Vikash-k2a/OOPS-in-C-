#include<iostream>
using namespace std;
class item{
public:
    int count=0;
    static int s_count; // start from 0 automatically
    item(){
        count++;
        s_count++;
    }
    static int fun();
};
int item::fun(){
    return ++s_count;
}
int item::s_count{10};

int main(){
    item t1, t2, t3;
    cout<<t1.count<<" "<<t2.count<<" "<<t3.count<<endl;
    cout<<item::s_count<<endl;
    cout<<item::fun();

    return 0;
}