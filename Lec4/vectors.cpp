#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr;
    cout<<arr.size()<<endl;
    
    arr.push_back(1);
    arr.push_back(34);
    arr.push_back(51);
    
    cout<<arr.size()<<endl;
    
    // vector<int> arr = {1,2,3,4,5};
    // vector<int> arr{1,2,3,4,5};
    // cout<<arr.size()<<endl;
    
    // vector<int> arr(10);
    // vector<int> arr(10,-1);
    
    // for(int i = 0 ; i < arr.size() ; i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
    
    // int n;
    // cin>>n;
    // vector<int> arr(n);
    // for(int i = 0 ; i < n ; i++){
    //     cin>>arr[i];
    // }
    
    for(int ele: arr){
        cout<<ele<<" ";
    }

    return 0;
}