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
    A *arr = new A[3];
    delete[] arr;

    return 0;
}