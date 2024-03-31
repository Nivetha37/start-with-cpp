/*
Chef defines a pair of positive integers (a,b) to be a Oneful Pair, 
if a+b+(a.b)=111 output yes else no.
*/

#include <iostream>
using namespace std;

int main() {
    int a,b;
    cin>>a>>b;
	// your code goes here
	if((a+b+(a*b))== 111){
	    cout<<"Yes"<<endl;
	}else{
	    cout<<"No"<<endl;
	}
	return 0;
}
