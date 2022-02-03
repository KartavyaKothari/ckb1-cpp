#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    int a;
};

Student* get_new(){
    Student *s = new Student();
    s->a = 10;

    return s;
}

int main(){
    Student *ptr = get_new();
    cout<<ptr->a<<endl;
    return 0;
}