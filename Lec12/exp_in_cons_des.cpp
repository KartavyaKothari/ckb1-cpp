#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    A(){
        cout<<"Cons of A called"<<endl;
    }
    ~A(){
        cout<<"Des of A called"<<endl;
    }
};

int main(){
    // A a;
    try{
        A a;
        throw 1;
    }catch(int e){
        cout<<"exp"<<endl;
    }

    cout<<"Program ends"<<endl;

    return 0;
}