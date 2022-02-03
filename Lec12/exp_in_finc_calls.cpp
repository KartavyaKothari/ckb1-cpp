#include<bits/stdc++.h>
using namespace std;

void func(){
    throw 12;
}

void func1(){
    func();
}

void func2(){
    func1();
}

int main(){
    try{
        func2();
    }catch(...){
        cout<<"Exp caught"<<endl;
    }

    return 0;
}