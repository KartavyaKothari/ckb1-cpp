#include<bits/stdc++.h>
using namespace std;

int main(){

    int res = 'z';

    switch (res)
    {
        case 0:
            cout<<"Zero"<<endl;    
            break;
        case 1:
            cout<<"One"<<endl;
            break;
        case 2:
            cout<<"Two"<<endl;
        case 3:
            cout<<"Three"<<endl;
            break;
        case 4:
            cout<<"Four"<<endl;
    }

    switch(res){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            cout<<"Is vowel"<<endl;
            break;
        default:
            cout<<"Is not vowel"<<endl;
    }

    return 0;
}