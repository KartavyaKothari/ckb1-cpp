#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b;
    cin>>a>>b;
    try{
        if(b==0){
            throw 404;
        }
        cout<<a/b<<endl;
    }catch(int e){
        cout<<e<<endl;
    }

    cout<<"Program ended sucessfully"<<endl;
    return 0;
}