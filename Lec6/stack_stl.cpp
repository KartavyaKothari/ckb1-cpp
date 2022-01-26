#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<vector<int>> s;

    s.push({1,2,3,4});
    s.push({3,2,1});
    s.push({4,4,4,4,5,6,7,6});

    while(s.size() > 0){
        
        for(int ele: s.top()){
            cout<<ele<<" ";
        }
        cout<<endl;

        s.pop();
    }

    return 0;
}