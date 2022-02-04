#include<bits/stdc++.h>
using namespace std;

class Parent{
    public:
    virtual void show(){
        cout<<"Showing from parent"<<endl;
    }

    void print(){
        cout<<"Printing from parent"<<endl;
    }
};

class Child: public Parent{
    public:
    void show(){
        cout<<"Showing from chlid"<<endl;
    }
    
    void print(){
        cout<<"Printing from child"<<endl;
    }
};

int main(){
    Parent *a = new Parent();
    Parent *b = new Child();

    // a->show();
    // a->print();

    b->show();
    b->print();

    return 0;
}