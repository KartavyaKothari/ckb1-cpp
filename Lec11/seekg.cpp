#include<bits/stdc++.h>
using namespace std;

int main(){
    ifstream fin("aman.eren");

    fin.seekg(-6,ios_base::end);

    string str;
    getline(fin,str);

    cout<<str;

    return 0;
}