#include<bits/stdc++.h>
using namespace std;

int main(){
    double height = 160.55;
    int height_m = (int)height/100; // Explicit
    int height_cms = height-height_m*100; // Implicit

    cout<<height_m<<" mts and "<<height_cms<<" cms."<<endl;
    
    return 0;
}