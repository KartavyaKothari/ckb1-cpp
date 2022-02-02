#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    int a;
};

class B: virtual public A{};
class C: virtual public A{};
class D: public B, public C{};

int main(){
    D obj;
    obj.B::a = 10;
    obj.C::a = 20;
    obj.a = 30;

    cout<<obj.B::a<<" "<<obj.C::a<<endl;

    return 0;
}