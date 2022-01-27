#include<bits/stdc++.h>
using namespace std;

class Data{
    public:
    int ele;
    Data* next; 

    Data(int ele):ele(ele){
        // this->ele = ele;
        next = nullptr;
    }
};

class LinkedList{
    Data* start;
    Data* tail;
    int len;

    public:
    LinkedList(){
        start = tail = nullptr;
        len = 0;
    }

    void push_back(int ele){
        Data* d = new Data(ele);
        if(len == 0){
            start = tail = d;
            len++;
            return;
        }

        tail->next = d;
        tail = d;
        len++;
    }

    void push_front(int ele){
        Data* d = new Data(ele);
        if(len == 0){
            start = tail = d;
            len++;
            return;
        }

        d->next = start;
        start = d;
        len++;
    }

    int pop_front(){
        if(len == 0){
            return -1;
        }

        if(len == 1){
            start = tail = nullptr;
            len--;
            return 0;
        }

        start = start->next;
        len--;

        return 0;
    }

    int peek_front(){
        if(len == 0){
            return -1;
        }

        return start->ele;
    }

    int peek_end(){
        if(len == 0){
            return -1;
        }

        return tail->ele;
    }

    int size(){
        return len;
    }

    void display(){
        Data* temp = start;

        while(temp!=nullptr){
            cout<<temp->ele<<" ";
            temp = temp->next;
        }
    }
};

class Stack{
    LinkedList *ll;

    public:
    Stack(){
        ll = new LinkedList();
    }

    void push(int ele){
       ll->push_front(ele);
    }

    void pop(){
       ll->pop_front();
    }

    int top(){
        if(ll->size() == 0){
            cout<<"Stack Empty"<<endl;
            return -1;
        }
        return ll->peek_front();
    }

    int size(){
        return ll->size();
    }
};

int main(){
    Stack s;

    s.push(10);
    s.push(13);
    s.push(20);

    while(s.size() > 0){
        cout<<s.top()<<endl;
        s.pop();
    }    

    return 0;
}