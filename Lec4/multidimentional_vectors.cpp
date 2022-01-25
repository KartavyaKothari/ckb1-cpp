#include<bits/stdc++.h>
using namespace std;

void display(vector<vector<vector<int>>> &arr3d){
   for(vector<vector<int>> d2: arr3d){
        for(vector<int> d1: d2){
            for(int ele: d1){
                cout<<ele<<" ";
                // ele = 10;
            }
            cout<<endl;
        }
        cout<<endl;
    } 
}

int main(){
    vector< vector<int> > arr2d(10,vector<int>(5,0));

    // int arr[3][4][2];
    vector<vector<vector<int>>> arr3d(3,vector<vector<int>>(4,vector<int>(2,34)));

    // vector<vector<vector<int>>> arr_3d(3,arr2d); 

    // 3d vector is a 1d vector of 2d vectors

    for(int i = 0 ; i < arr3d.size() ; i++){
        for(int j = 0 ; j < arr3d[0].size() ; j++){
            for(int k = 0 ; k < arr3d[0][0].size() ; k++){
                // cout<<arr3d[i][j][k]<<" ";
                arr3d[i][j][k] = 10;
            }
            // cout<<endl;
        }
        // cout<<endl;
    }

    // display(arr3d);

    vector<vector<vector<int>>> arr_3d_ex;

    arr_3d_ex.push_back({{1,2,3},{4,5,6}});
    arr_3d_ex.push_back({{1,2,3},{4,5,6}});
    arr_3d_ex.push_back(arr_3d_ex.front());

    // arr_3d_ex.back();

    display(arr_3d_ex);

    return 0;
}