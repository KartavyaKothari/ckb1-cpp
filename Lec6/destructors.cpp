#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    A(){
        cout<<"Def cons called"<<endl;
    }
    ~A(){
        cout<<"Def des called"<<endl;
    }
};

void func(){
    cout<<"Inside func"<<endl;
    A a;
    cout<<"Ending func"<<endl;
}

int main(){
    cout<<"Calling func"<<endl;
    func();
    cout<<"Out of func, in main"<<endl;

    return 0;
}