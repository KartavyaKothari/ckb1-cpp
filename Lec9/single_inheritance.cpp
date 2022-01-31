#include<bits/stdc++.h>
using namespace std;

class Animal{
    public:
    string species;
    void speak(){
        cout<<"oooooo weeeeeee"<<endl;
    }
};

class Dog: public Animal{
    public:
    void introduce(){
        cout<<"Hi, I am a "<<species<<endl;
    }
};

int main(){
    Dog d;
    d.speak();
    d.species = "Canine";
    d.introduce();

    return 0;
}