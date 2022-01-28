#include<bits/stdc++.h>
using namespace std;

class Time{
    int hours;
    int mins;

    public:
    Time(int mins_today){
        hours = mins_today/60;
        mins = mins_today%60;
    }

    void display(){
        cout<<(hours/10==0?"0":"")<<hours<<(mins/10==0?":0":":")<<mins<<endl;
    }
};

int main(){
    int mins_today;
    cin>>mins_today;

    // Time t(mins_today);
    Time t = mins_today;
    t.display();

    return 0;
}