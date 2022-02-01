#include<bits/stdc++.h>
using namespace std;

class Animal{
    public:
    void speak(){
        cout<<"Default animal sound"<<endl;
    }
};

class Dog: public Animal{
    public:
    void speak(){
        // Animal::speak();
        cout<<"Woof! woof! "<<endl;
    }
};

class PetDog: public Dog{};

int main(){
    Dog d;
    // d.speak();

    Animal a;
    // a.speak();

    PetDog pt;
    pt.Animal::speak();

    return 0;
}