/* find if there exists any integer B which meets the following condition

-B must be an integer
-B is the average of A and C.

*/

#include <bits/stdc++.h>
using namespace std;

int main() 
{
  int t;
  cin>>t;
  while(t--)
  {
    int A,C;
    float B;
    cin>>A>>C;
    B = (A+C)/2.0;
    if(B == static_cast<int>(B)){
        cout<<B<<endl;
    }
    else{
        cout<<-1<<endl;
    }
    
   }
 return 0;
}
