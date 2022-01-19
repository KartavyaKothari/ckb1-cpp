#include<bits/stdc++.h>
using namespace std;

void incre_by_value(int a){
    ++a;
}

void incre_by_address(int *ptr){
    (*ptr)++;
}

void incre_by_reference(int &a){
    a++;
}

int main(){
    int a = 10;
    incre_by_value(a);
    incre_by_address(&a);
    incre_by_reference(a);
    cout<<a<<endl;

    return 0;
}