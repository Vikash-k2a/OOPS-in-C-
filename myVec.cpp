#include <iostream>
using namespace std;
class Vector{
public:
    int size;
    int capacity;
    int* arr;
    Vector(){
        size=0;
        capacity=1;
        arr=new int[capacity];
    }
    void push(int n){
        if(size==capacity){
            capacity *= 2;
            int* arr2= new int[capacity];
            for(int i=0;i<size;i++){
                arr2[i]=arr[i];
            }
            arr=arr2;
        }
        arr[size++]=n;
    }
    void pop(){
        if(size<=0){
            cout<<"the array is empty."<<endl;
        }
        else{
            size--;
        }
    }
    void print(){
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" "<<endl;
        }
    }
};

int main(){
    Vector v1;
    v1.push(45);
    v1.push(25);
    v1.pop();
    v1.push(21);
    v1.push(44);
    cout<<v1.size<<" "<<v1.capacity<<endl;
    v1.push(53);
    v1.print();
    cout<<v1.size<<" "<<v1.capacity<<endl;
    return 0;
}