#include<iostream>
using namespace std;
class fraction{
public:
    int num;
    int den;
    fraction(){

    }
    fraction(int n, int d){
        num=n;
        den=d;
    }
    // inline function
    inline int add(int a,int b){
        return a+b;
    }
    fraction operator+(fraction f){
        int num=this->num*f.den+this->den*f.num;
        int den=this->den*f.den;
        fraction ans(num,den);
        return ans;
    }
};

int main(){
    fraction f1(1,2);
    fraction f2(1,4);
    fraction f3=f1+f2;
    fraction x;
    cout<<x.add(2,45)<<endl;
    cout<<f3.num<<"/"<<f3.den<<endl;
    cout<<f1.num<<"/"<<f1.den<<endl;
    cout<<f2.num<<"/"<<f2.den<<endl;
    
    return 0;
}