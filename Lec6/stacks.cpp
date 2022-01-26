#include<bits/stdc++.h>
using namespace std;

class Stack{
    vector<int> arr;
    int len;
    int idx;
    int max_size;

    public:
    Stack(){
        max_size = 10;
        arr = vector<int>(max_size);
        len = 0;
        idx = -1;
    }

    Stack(int n){
        max_size = n;
        arr = vector<int>(max_size);
        len = 0;
        idx = -1;
    }

    void push(int ele){
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

    int top(){
        if(len == 0){
            cout<<"Stack empty"<<endl;
            return -1;
        }

        return arr[idx];
    }

    int size(){
        return len;
    }
};

int main(){
    Stack s(100);

    s.push(10);
    s.push(13);
    s.push(20);

    while(s.size() > 0){
        cout<<s.top()<<endl;
        s.pop();
    }

    return 0;
}