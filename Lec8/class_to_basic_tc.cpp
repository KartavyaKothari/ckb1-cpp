#include<bits/stdc++.h>
using namespace std;

class Date{
    int d;
    int m;
    int y;

    public:
    Date(int d, int m, int y):
        d(d),m(m),y(y)
    {}

    void display(){
        cout<<(d/10==0?"0":"")<<d<<(m/10==0?"/0":"/")<<m<<"/"<<y<<endl;
    }

    operator int(){
        return d+(m-1)*30;
    }
};

int main(){
    Date d(28,1,2022);
    d.display();

    int days_till_today = (int) d;
    cout<<days_till_today;

    return 0;
}