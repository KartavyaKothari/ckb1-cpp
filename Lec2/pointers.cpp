#include<bits/stdc++.h>
using namespace std;

int main(){
    int a = 10;
    
    // int *ptr = &a;
    // int* ptr = &a;
    int *ptr;
    ptr = &a;

    int** ptrptr = &ptr;
    int*** ptrptrptr = &ptrptr;

    cout<<"a: "<<a<<endl;
    cout<<"*ptr: "<<*ptr<<endl;
    cout<<"**ptrptr: "<<**ptrptr<<endl;
    cout<<endl;
    cout<<"&a: "<<&a<<endl;
    cout<<"ptr: "<<ptr<<endl;
    cout<<"*ptrptr: "<<*ptrptr<<endl;
    cout<<endl;
    cout<<"&ptr: "<<&ptr<<endl;
    cout<<"ptrptr: "<<ptrptr<<endl;
    
    

    return 0;
}