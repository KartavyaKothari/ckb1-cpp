#include<bits/stdc++.h>
using namespace std;

class MacDonald{
    public:
    virtual void milk_shake() = 0;
    virtual void coke_dispensor() = 0;
};

class Madhav_Macd: public MacDonald{
    public:
    void milk_shake(){
        cout<<"Shaking milk"<<endl;
    }
};

class Aman_Macd: public Madhav_Macd{
    public:

    void coke_dispensor(){
        cout<<"Dispensing coke"<<endl;
    }
};

int main(){

    // Madhav_Macd store;
    Aman_Macd store;

    return 0;
}