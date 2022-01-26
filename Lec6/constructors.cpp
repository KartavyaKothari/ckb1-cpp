#include<bits/stdc++.h>
using namespace std;

class Animal{
    public:
    int age;
    string species;

    Animal(){
        // cout<<"Def cons called"<<endl;
    }

    Animal(int age, string species){
        this->age = age;
        this->species = species;

        // cout<<this<<endl;
    }

    Animal(string species){
        this->age = 1;
        this->species = species;

        // cout<<this<<endl;
    }

    // Animal(Animal &a){
    //     this->age = a.age;
    //     this->species = a.species;
    // }
};

int main(){
    // cout<<"In main"<<endl;
    Animal ab;
    // cout<<"In main"<<endl;
    Animal* a = new Animal(23,"Dog");
    Animal* b = new Animal("Cat");
    Animal c(*a);
    // Animal d = *a;


    cout<<c.age<<" "<<c.species<<endl;

    return 0;
}