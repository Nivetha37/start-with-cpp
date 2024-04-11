/*Harsh was recently gifted a book consisting of N pages.
Each page contains exactly M words printed on it.
As he was bored, he decided to count the number of words in the book.*/

#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t-- >0){
        int n,m;
        cin>>n>>m;
        cout<<n*m<<endl;
    }
    return 0;
}
