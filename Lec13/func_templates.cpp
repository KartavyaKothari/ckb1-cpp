#include<bits/stdc++.h>
using namespace std;

template <class AKSHAT> 
vector<AKSHAT> reverse_arr(vector<AKSHAT> &arr){
    vector<AKSHAT> rev_arr;
    for(int i = arr.size()-1 ; i>=0 ; i--){
        rev_arr.push_back(arr[i]);
    }

    return rev_arr;
}

template <class AKSHAT> 
void display(vector<AKSHAT> &arr){
    for(AKSHAT ele: arr){
        cout<<ele<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int> arr = {1,2,3,4};
    vector<string> s_arr = {"hello","cello","bello"};
    display<int>(arr);
    vector<int> r_arr = reverse_arr(arr);
    display<int>(r_arr);

    cout<<endl;

    display<string>(s_arr);
    vector<string> rev_s_arr = reverse_arr<string>(s_arr);
    display<string>(rev_s_arr);

    return 0;
}