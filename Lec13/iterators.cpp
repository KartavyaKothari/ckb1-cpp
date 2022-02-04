#include<bits/stdc++.h>
using namespace std;

int main(){
    list<string> solar_sys = {"Mercury","Venus","Earth","Mars","Jupitor","Saturn","Uranus","Neptune"};
    // list<string>::iterator falcon = solar_sys.begin();
    auto falcon = solar_sys.begin();
    auto milano = solar_sys.begin();

    for(falcon = solar_sys.begin() ; falcon != solar_sys.end() ; falcon++){
        cout<<*falcon<<endl;
    }
    cout<<endl;

    advance(falcon,-6); // falcon = falcon-6
    cout<<"Falcon is "<<distance(milano,falcon)<<" planets forward"<<endl;

    cout<<endl;

    // list<string>::reverse_iterator itr;
    for(auto itr = solar_sys.rbegin() ; itr != solar_sys.rend() ; itr++){
        cout<<*itr<<endl;
    }
}