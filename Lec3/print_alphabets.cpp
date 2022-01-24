#include<bits/stdc++.h>
using namespace std;

int main(){
    char arr[] = {'a','b','c','d','e','f','g'};

    for(int i = 0 ; i < 7 ; i++){
        cout<<*(arr+i);
    }
}

// arr[i] == *(arr+i)