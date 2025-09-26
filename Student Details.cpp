#include<iostream>
using namespace std;

class Student {
    public:
    string name;
    string branch;
    string subject;
    string year;
    float result;
};

int main(){
    Student S1;
    S1.name="Anavi";
    S1.branch="E&TC";
    S1.subject="C++";
    S1.year="Second";
    S1.result=7.5;

    Student S2;
    S2.name="Ana ";
    S2.branch="E&TC";
    S2.subject="C++";
    S2.year="Second";
    S2.result=8.00;

    Student S3;
    S3.name="navi";
    S3.branch="E&TC";
    S3.subject="C++";
    S3.year="Second";
    S3.result=8.50;

    cout<<S1.name<<endl;

    return 0;
}

// OUTPUT
// Anavi
