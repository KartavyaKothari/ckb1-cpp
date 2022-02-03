#include<bits/stdc++.h>
using namespace std;

class Saarim{
    public:
    string what(){
        return "I am Saarim exception, HAAAAAA";
    }
};

int main(){
    try{
        try{
            throw Saarim();
        }catch(Saarim e){
            cout<<e.what()<<endl;
            cout<<"This exception is too much for me, so I am rethrowing it to someone else"<<endl;
            throw;
        }
    }catch(Saarim e){
        cout<<"Yea yea, I am the calvelry, I'll handle it"<<endl;
        cout<<e.what()<<endl;
    }

    cout<<"Program ends nicely!"<<endl;

    return 0;
}