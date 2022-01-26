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

int main(){
    LinkedList ll;

    ll.push_back(10);
    ll.push_front(20);
    ll.push_front(30);

    cout<<ll.size()<<endl;

    ll.display();

    return 0;
}