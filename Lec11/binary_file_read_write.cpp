#include<bits/stdc++.h>
using namespace std;

struct Employee{
    int age;
    // char gender;
    int salary;

    public:
    Employee(){}
    Employee(int a, int s){
        age = a;
        // gender = g;
        salary = s;
    }

    void display(){
        // cout<<"Gender: "<<gender<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Salary: "<<salary<<endl;
    }
};

int main(){
    vector<Employee> arr;

    arr.push_back(Employee(42,80000));
    arr.push_back(Employee(22,50000));
    arr.push_back(Employee(21,30000));

    fstream fs;
    fs.open("magurie.company",ios::out|ios::binary);

    for(Employee e: arr){
        // fs<<e;
        fs.write((char*)&e,sizeof(Employee));
        // fs<<endl;
    }

    fs.close();
    fs.open("magurie.company",ios::in|ios::binary);

    for(int i = 0 ; i < arr.size(); i++){
        Employee e;
        fs.read((char*)&e,sizeof(Employee));
        e.display();
        cout<<endl;
    }

    fs.close();

    return 0;
}