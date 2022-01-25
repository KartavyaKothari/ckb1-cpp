#include<bits/stdc++.h>
using namespace std;

class Student{
    int marks;
    public:
    int age;
    string name;

    void introduce(){
        cout<<"Hi, my name is "<<name<<", I am "<<age<<" years old."<<endl;
    }
};

int main(){
    // Student s;
    // cout<<sizeof(s);
    // Student s();

    // Student s = Student();
    // s.name = "Madhav";
    // s.age = 21;
    // s.marks = 100;

    Student *s = new Student();
    s->name = "Madhav";
    s->age = 21;

    s->introduce();

    return 0;
}