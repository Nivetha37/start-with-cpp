/*x = threshole brain speed
y= actual brain speed

if x>=y the output= NO
else output = YES*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int X,Y;
	cin>>X>>Y;
	if(X>Y){
	    cout<<"NO"<<endl;
	    
	}
	else if(Y>X){
	    cout<<"YES"<<endl;
	}
	else{
	    
	    cout<<"NO"<<endl;
	}
	    
	
	
	return 0;
}
