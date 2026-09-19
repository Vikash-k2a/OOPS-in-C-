#include <iostream>
using namespace std;

// Abstract class, Pure Virtual Function
class Shape{
public:
    virtual void draw() = 0;
};
class Circle : public Shape{
public:
    void draw(){
        cout << "It's a Circle" << endl;
    }
};

// Virtual Base Class Concept
class Student{
protected:
    int roll;
public:
    void getRoll(int r){
        roll = r;
    }
};
class Test : virtual public Student{
protected:
    int marks;
public:
    void getMarks(int m){
        marks = m;
    }
};
class Sports : virtual public Student{
protected:
    int score;
public:
    void getScore(int s){
        score = s;
    }
};
class Result : public Test, public Sports{
public:
    void display(){
        cout << "Roll Number: " << roll << endl;
        cout << "Marks: " << marks << endl;
        cout << "Sports Score: " << score << endl;
    }
};

// Class Template(Calculator)
template <class T>
class Calculator{
public:
    T add(T a, T b){
        return a + b;
    }
    T subt(T a, T b){
        return a - b;
    }
    T mult(T a, T b){
        return a * b;
    }
    T div(T a, T b){
        return a / b;
    }
};

int main(){
    Shape *s;
    Circle c;
    s = &c;
    s->draw();
    cout << endl;

    Result r;
    r.getRoll(12513056);
    r.getMarks(85);
    r.getScore(21);
    r.display();
    cout << endl;

    Calculator<int> calc;
    cout << "Addition: " << calc.add(56, 21) << endl;
    cout << "Subtraction: " << calc.subt(56, 21) << endl;
    cout << "Multiplication: " << calc.mult(56, 21) << endl;
    cout << "Division: " << calc.div(56, 21) << endl;
    return 0;
}