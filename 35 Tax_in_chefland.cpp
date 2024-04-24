/*
Practice problem - Tax in Chefland
In Chefland, a tax of rupees 10 is deducted if the total income is strictly greater than rupees 100.
Given that total income is X rupees, find out how much money does the Chef take home.
*/

#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t-- >0){
        int x;
        cin>>x;
        if(x > 100){
            cout<<x-10<<endl;
        }
        else{
            cout<<x<<endl;
        }
    }
    return 0;
}
