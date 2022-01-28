#include<bits/stdc++.h>
using namespace std;

class Metric{
    public:

    int kms;
    int mts;
    int cms;

    Metric(){}

    Metric(int k, int m, int c){
        this->cms = c;
        this->kms = k;
        this->mts = m;
    }

    void display(){
        cout<<kms<<" kms, "<<mts<<" mts and "<<cms<<" cms."<<endl;
    }
};

class Imperial{
    public:

    int miles;
    int feet;
    int inches;

    Imperial(){}

    Imperial(int m, int f, int i){
        miles = m;
        feet = f;
        inches = i;
    }

    void display(){
        cout<<miles<<" miles, "<<feet<<" feet and "<<inches<<" inches."<<endl;
    }

    Imperial(Metric &m){
        miles = m.kms*0.621;
        feet = m.mts*3.28;
        inches = m.cms*0.394;
    }

    void operator =(Metric m){
        miles = m.kms*0.621;
        feet = m.mts*3.28;
        inches = m.cms*0.394;
    }

    operator Metric(){
        int k = miles/0.621;
        int m = feet/3.28;
        int c = inches/0.394;

        return Metric(k,m,c);
    }
};

int main(){
    Metric m(8,848,86);
    m.display();

    // Imperial i(m);
    Imperial i = m;
    i.display();

    Imperial i2;
    i2 = m;
    i2.display();

    Metric m2 = (Metric) i;
    m2.display();

    return 0;
}