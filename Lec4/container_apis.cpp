#include<bits/stdc++.h>
using namespace std;

void display(string &str){
    for(char c: str){
        cout<<c<<endl;
    }
}

int main(){
    string movie = "KRISH";

    // for(int i = 0 ; i < movie.size(); i ++){
    //     cout<<movie[i]<<endl;
    // }
    // display(movie);

    movie.push_back(' ');
    movie.push_back('3');
    cout<<movie<<endl;
    movie.pop_back();
    cout<<movie<<endl;

    return 0;
}