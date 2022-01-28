#include<bits/stdc++.h>
using namespace std;

int main(){
    double height = 160.55;
    int height_m = height/100;
    int height_cms = height-height_m*100;

    cout<<height_m<<" mts and "<<height_cms<<" cms."<<endl;
    
    return 0;
}