#include<bits/stdc++.h>
using namespace std;

template <class SAARIM>
class Stack{
    vector<SAARIM> arr;
    int len;
    int idx;
    int max_size;

    public:
    Stack(){
        max_size = 10;
        arr = vector<SAARIM>(max_size);
        len = 0;
        idx = -1;
    }

    Stack(int n){
        max_size = n;
        arr = vector<SAARIM>(max_size);
        len = 0;
        idx = -1;
    }

    void push(SAARIM ele){
        if(len == max_size){
            cout<<"Stack overflow"<<endl;
            return;
        }

        idx++;
        arr[idx] = ele;
        len++;
    }

    void pop(){
        if(len == 0){
            cout<<"Stack empty"<<endl;
            return;
        }

        idx--;
        len--;
    }

    SAARIM top(){
        // if(len == 0){
        //     cout<<"Stack empty"<<endl;
        //     return -1;
        // }

        return arr[idx];
    }

    int size(){
        return len;
    }
};

int main(){
    Stack<int> s(100);

    s.push(10);
    s.push(13);
    s.push(20);

    while(s.size() > 0){
        cout<<s.top()<<endl;
        s.pop();
    }

    cout<<endl;

    Stack<vector<string>> stk;

    stk.push({"sapno","main","roz","aye"});
    stk.push({"dundhe","tuje","jamana"});
    stk.push({"o","o","jane","jana"});

    while(stk.size()>0){
        for(auto ele: stk.top()){
            cout<<ele<<" ";
        }
        cout<<endl;
        stk.pop();
    }

    return 0;
}