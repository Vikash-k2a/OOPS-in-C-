#include<iostream>
using namespace std;
class num{
public:
    int a;
    int b;
    num(int a, int b){
        this->a=a;
        this->b=b;
    }
};
void divide(num n){
    
        if(n.b==0){
            throw 0;
        }
        cout<<n.a/n.b<<endl;
    
    
    
}

int main(){
    num n1(5,10);
    string word="hen";
    int n=5;
    
    try{
        divide(n1);
        if(n>word.size()){
            throw "invalid indx";
        }
        cout<<word.at(n)<<endl;
    }
    catch(int e){
        cout<<"catch 1:"<<endl;
    }
    catch(const char* e){
        cout<<"catch 2:"<<e<<endl;
    }
    return 0;
}