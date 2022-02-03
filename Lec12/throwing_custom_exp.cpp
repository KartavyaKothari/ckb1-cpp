#include<bits/stdc++.h>
using namespace std;

class Aman{
    public:
    string what(){
        return "Hi, I am an aman exception";
    }
};

int main(){
    int a;
    cin>>a;

    try{
        switch (a){
            case 1:
                throw 12;
            case 2:
                throw "str exp";
            case 3:
                throw Aman();
            case 4:
                throw 'm';
            default:
                throw bad_alloc();
        }
    }catch(int e){
        cout<<e<<endl;
    }catch(const char* e){
        cout<<e<<endl;
    }catch(Aman e){
        cout<<e.what()<<endl;
    }catch(char e){
        cout<<"Exp of type char: "<<e<<endl;
    }catch(...){
        cout<<"Unknown exception occured"<<endl;
    }

    cout<<"Program ended sucessfully"<<endl;
    return 0;
}