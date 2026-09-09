#include <iostream>
#include <fstream>
using namespace std;
// Hierarchical Inheritance
class Person{
public:
    string name;
    void naam(){
        cout << "Name : " << name << endl;
    }
};
class Student : public Person{
public:
    int roll;
    void studentData(){
        naam();
        cout << "Roll no: " << roll << endl;
    }
};
class Teacher : public Person{
public:
    int id;
    void teacherData(){
        naam();
        cout << "ID : " << id << endl;
    }
};

// Hybrid (Multilevel + Multiple)
class CR : public Student, public Teacher{
public:
    void crData(){
        cout << "Class Details:" << endl;
        Student::studentData();
        Teacher::teacherData();
    }
};

// FUNCTION and OPERATOR OVERLOADING
class Add{
public:
    // Function Overloading
    int sum(int a, int b){
        return a+b;
    }

    double sum(double a, double b){
        return a+b;
    }
    // Operator Overloading
    Add operator+(Add obj){
        cout << "Operator + is used." << endl;
        return Add();
    }
};

// FILE HANDLING
void file(){
    ofstream file("data.txt");
    file << "Hello World\n";
    file.close();
    ofstream file2("data.txt", ios::app);
    file2 << "adding more text\n";
    file2.close();
    ifstream file3("data.txt");
    string l;
    cout <<"Reading File : ";
    while (getline(file3, l)){
        cout <<l<< endl;
    }
    file3.close();
}

// EXCEPTION HANDLING
void divide(int a, int b){
    if (b==0){
        throw "UNDEFINED!";
    }
    cout << "Answer : " << a/b << endl;
}

int main(){
    CR m;
    m.Student::name = "Vikash";
    m.roll = 101;
    m.Teacher::name = "Baroon";
    m.id =1254;
    m.crData();
    Add n1, n2;
    cout << "Sum : " << n1.sum(5, 10) << endl;
    cout << "Sum : " << n1.sum(2.72, 3.35) << endl;
    n1 + n2;
    file();
    try{
        divide(145, 0);
    }
    catch (const char* m){
        cout << "Error : " << m << endl;
    }
    
    return 0;
}