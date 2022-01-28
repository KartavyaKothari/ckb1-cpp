#include<bits/stdc++.h>
using namespace std;

class Data{
    public:
    int ele;
    Data* next;
    Data* prev;

    Data(int ele):ele(ele){
        // this->ele = ele;
        next = prev = nullptr;
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
        d->prev = tail;
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
        start->prev = d;
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
        start->prev = nullptr;
        len--;

        return 0;
    }

    int pop_end(){
        if(len == 0){
            return -1;
        }

        if(len == 1){
            start = tail = nullptr;
            len--;
            return 0;
        }

        tail = tail->prev;
        tail->next = nullptr;
        len--;

        return 0;
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

    // void insert_at(int idx,int ele);
    // void delete_at(int idx);
    // int peek_at(int idx);
};

// Use this linkedlist to implement queue
// Use this implementation to implement double ended queue

int main(){
    LinkedList ll;

    ll.push_back(10);
    ll.push_front(20);
    ll.push_front(30);

    cout<<ll.size()<<endl;

    ll.display();

    return 0;
}