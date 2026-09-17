#include <iostream>
#include <vector>
#include <list>
#include <deque>
using namespace std;
//User-defined exception
void divide(int a, int b){
    if (b==0){
        throw "UNDEFINED!";
    }
    cout << "Answer : " << a/b << endl;
}

int main(){
    cout << "vector:" <<endl;
    vector<int> v;
    v.push_back(5);
    v.push_back(6);
    v.push_back(4);
    for(int i=0;i<v.size();i++){
        cout << v[i] <<" ";
    }
    cout <<endl;
    cout << "list:" << endl;
    list<int> l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    for(int x : l){
        cout <<x<<" ";
    }
    cout <<endl;
    cout << "deque:" << endl;
    deque<int> d;
    d.push_front(65);
    d.push_back(25);
    d.push_back(32);
    for(int x : d){
        cout <<x<<" ";
    }
    cout <<endl;
    try{
        divide(145, 0);
    }
    catch(const char* m){
        cout << "Error : " << m << endl;
    }

    return 0;
}