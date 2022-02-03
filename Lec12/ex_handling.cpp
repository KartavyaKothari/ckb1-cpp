#include<bits/stdc++.h>
using namespace std;

int main(){
    int a;
    cin>>a;

    try{
        int *arr = new int[a*a*a];
    }catch(bad_alloc e){
        cout<<"Exp thrown"<<endl;
        cout<<"Handled it"<<endl;
    }
    
    cout<<"Program ended nicely!"<<endl;

    return 0;
}