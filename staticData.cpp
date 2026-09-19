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
};
int item::s_count;

int main(){
    item t1, t2, t3;
    cout<<t1.count<<" "<<t2.count<<" "<<t3.count<<endl;
    cout<<item::s_count;

    return 0;
}