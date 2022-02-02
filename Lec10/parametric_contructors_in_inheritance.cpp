#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    A(int a, int b){
        cout<<a<<" "<<b<<endl;
    }
};

class C{
    public:
    C(int a, int b){
        cout<<"Cons of C"<<endl;
    }
};

class B: public A, public C{
    public:
    B(int a, int b):C(a,b),A(a,b){
        // A(a,b);
    }
};

int main(){
    B obj(10,43);

    return 0;
}