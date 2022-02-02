#include<bits/stdc++.h>
// #include<fstream>
using namespace std;

int main(){
    fstream fs;
    fs.open("sachin.strange",ios::out);

    if(!fs){
        cout<<"File opening failed"<<endl;
    }else{
        cout<<"File sucessfully opened"<<endl;
    }

    fs.close();

    return 0;
}