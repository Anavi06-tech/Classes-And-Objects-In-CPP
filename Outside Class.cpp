
#include<iostream>
using namespace std;

class Student
{
    public:
    void myMethod();
};

void Student::myMethod()
{
    cout<<"I am Aditya";
}

int main()
{
    Student s1;
    s1.myMethod();
}

// OUTPUT
// I am Anavi
