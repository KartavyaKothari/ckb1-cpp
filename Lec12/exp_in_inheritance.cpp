#include<bits/stdc++.h>
using namespace std;

class A{};
class B: public A{};

int main(){
    A a;
    B b;

    // a = b;

    try{
        throw b;
    }
    catch(B e){
        cout<<"EXP B"<<endl;
    }
    catch(A e){
        cout<<"EXP A"<<endl;
    }

    return 0;
}