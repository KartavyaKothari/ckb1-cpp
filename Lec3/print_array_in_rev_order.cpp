#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {10,20,30,40,50,60,70,80,90};

    for(int i = 0 ; i < 9 ; i++){
        cout<<*(arr+i)<<" ";
    }

    cout<<endl;

    // for(int i = 0 ; i < 9 ; i++){
    //     cout<<*(arr+8-i)<<" ";
    // }

    for(int i = 8 ; i >= 0 ; i--){
        cout<<*(arr+i)<<" ";
    }

    return 0;
}

// Introduction to algorithms
// Cracking the coding interview