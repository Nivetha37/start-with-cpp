/*
Chef and his girlfriend go on a date. 
Chef took X dollars with him, and was quite sure that this would be enough to pay the bill.
At the end, the waiter brought a bill of Y dollars.
Print "YES" if Chef has enough money to pay the bill, or "NO" if he has to borrow from his girlfriend and leave a bad impression on her.
*/

#include <iostream>
using namespace std;

int main() {
int t,x,z;
cin>>t;
while (t--)
{
    cin>>x>>z;
    if (x>=z)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}
	return 0;
}
