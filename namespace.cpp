#include<iostream>
using namespace std;
namespace lib1{
    int add(int a, int b){
        return a-b;
    }
};
namespace lib2{
    int add(int a, int b){
        return a*b;
    }
};
class num{
public:
    int a;
    int b;
    num(int a, int b){
        this->a=a;
        this->b=b;
    }
};

int main(){
    num n1(5,8);
    cout<<lib1::add(n1.a,n1.b)<<endl;
    cout<<lib2::add(n1.a,n1.b)<<endl;
    return 0;
}