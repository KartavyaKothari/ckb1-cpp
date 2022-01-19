#include<bits/stdc++.h>
using namespace std;

// 1. It has different number of parameters
// 2. It has same number of parameters but diferent data type of params
// 3. It has different number of parameters and different data type of params

// (condition) ? (true statement) : (false statement);


int max_self(int a, int b){
    return a>b?a:b;
}

int max_self(int a, int b , int c){
    return max_self(a,max_self(b,c));
}

int max_self(int a, int b, int c, int d){
    return max_self(max_self(a,b,c),d);
}

int main(){
    cout<<"Max of 2 nos : "<<max_self(-10,-20);
    cout<<"Max of 3 nos : "<<max_self(10,-20,100);

    return 0;
}