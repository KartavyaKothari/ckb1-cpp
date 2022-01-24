#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[2][2][4] = {
        {
            {1,2,3,4},
            {5,6,7,8}
        },
        {
            {8,7,6,5},
            {4,3,2,1}
        }
    };

    // int arr[2][2][4] = {1,2,3,4,5,6,7,8,8,7,6,5,4,3,2,1};

    cout<<arr<<endl;
    cout<<*arr<<endl;
    cout<<**arr<<endl;

    cout<<arr[1][0][2]<<endl;
    cout<<*(**(arr+1)+2)<<endl;

    return 0;
}