/*
n = size of the vector
q= number or queries
Vector is a dynamic array.

LOOP 1:
 -k is the size of each index of the vector.
 -to change the size(value = k) of each position(0 to n-1).
 -and get the elements of each position(0 to n-1).

LOOP 2:
-get i and j as input 
-and return the value at arr[i][j]
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {  
    int n,q;
    cin >>n>>q;
    vector<vector<int>> arr(n);
    for(int i;i<n;i++){
        int k;
        cin>>k;
        arr[i].resize(k);
        for(int j=0;j<k;j++){
            cin >>arr[i][j];
        }
    } 
    
    for(int query=0;query<n;query++){
        int i,j;
        cin >>i>>j;
        cout<<arr[i][j]<<endl;
    }
    return 0;
}
