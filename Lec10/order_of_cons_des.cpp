#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    A(){
        cout<<"Constructor of A called"<<endl;
    }
    ~A(){
        cout<<"Destructor of A called"<<endl;
    }
};

class B: public A{
    public:
    B(){
        cout<<"Constructor of B called"<<endl;
    }
    ~B(){
        cout<<"Destructor of B called"<<endl;
    }
};

class C: public B{
    public:
    C(){
        cout<<"Constructor of C called"<<endl;
    }
    ~C(){
        cout<<"Destructor of C called"<<endl;
    }
};

void func(){
    cout<<"Starting func"<<endl;
    C obj;
    cout<<"Ending func"<<endl;
}

int main(){
    cout<<"Calling func"<<endl;
    func();
    cout<<"Func is dead"<<endl;


    return 0;
}