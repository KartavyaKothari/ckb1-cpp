#include<bits/stdc++.h>
using namespace std;

void rec(int a){
    if(a == 0) return;

    cout<<a<<endl;
    rec(a-1);
    cout<<a<<endl;
}

int main(){
    int a = 3;
    rec(a);

    return 0;
}