#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    int age;
    string name;

    // Student(int age, string name){
    //     this->name = name;
    //     this->age = age;
    // }

    Student(int a, string n):
        name(n),
        age(a)
    {}

    void introduce(){
        cout<<"Hi, my name is "<<name<<", I am "<<age<<" years old"<<endl;
    }
};

int main(){
    Student* s = new Student(19,"Pradeep");
    s->introduce();
    return 0;
}