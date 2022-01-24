#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr;
    arr.reserve(20);
    
    for(int i = 0 ; i < 100 ; i++){
        cout<<arr.size()<<" "<<arr.capacity()<<endl;
        arr.push_back(i);
    }

	return 0;
}