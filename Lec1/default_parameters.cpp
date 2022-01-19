#include<bits/stdc++.h>
using namespace std;

int sum(int a = 0, int b = 0, int c = 0, int d = 0, int e = 0, int f = 0){
    cout<<" "<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<" "<<f<<endl;
    return a+b+c+d+e+f;
}

int main(){
    cout<<"Sum of no numbers = "<<sum()<<endl;
    cout<<"Sum of 2 numbers = "<<sum(10,20)<<endl;
    cout<<"Sum of 3 numbers = "<<sum(10,20,30)<<endl;
    cout<<"Sum of 4 numbers = "<<sum(10,20,30,40)<<endl;

    return 0;
}

