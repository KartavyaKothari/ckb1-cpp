#include<bits/stdc++.h>
using namespace std;

void print_arr(int arr[], int size){
    for(int i = 0 ; i < size ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int arr2[9];
    int rot;

    cout<<"Enter number of rotations"<<endl;
    cin>>rot;

    print_arr(arr,9);

    // (INT_MAX/n)*n
    // INT_MAX-INT_MAX%9

    for(int i = 0 ; i < 9 ; i++){
        arr2[(i+rot)%9] = arr[i];
    }

    print_arr(arr2,9);

    cout<<endl;

    return 0;
}