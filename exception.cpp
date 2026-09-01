#include<iostream>
#include<exception>
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


int main(){
    num n1(5,0);
    string word="hen";
    try{
        //int* ptr=new int[9999999999999999];
        //cout<<word.at(5)<<endl;
        if(n1.b==0){
            throw runtime_error("division by 0");
        }
        cout<<n1.a/n1.b<<endl;
    }
    catch(bad_alloc& e){
        cout<<"catch 1:"<<e.what()<<endl;
    }
    catch(out_of_range& e){
        cout<<"catch 2:"<<e.what()<<endl;
    }
    catch(runtime_error& e){
        cout<<"catch 3:"<<e.what()<<endl;
    }
    catch(exception& e){
        cout<<"catch 4:"<<e.what()<<endl;
    }
    catch(...){
        cout<<"catch bro:"<<endl;
    }
    return 0;
}