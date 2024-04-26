/*
Top 10 participants receive rupees X each.
Participants with rank 11 to 100 (both inclusive) receive rupees Y each.
Find the total prize money over all the participants.
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t-- >0){
        int x,y;
        cin>>x>>y;
        cout<<(x*10)+(y*90)<<endl;
    }
    return 0;
}
