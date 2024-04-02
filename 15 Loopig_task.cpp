#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a,b;
    cin >>a>>b;
    string num[] ={"one","two","three","four","five","six","seven","eight","nine"};
    for(int i=a;i<=b;++i){
        if(i>=1 && i<=9){
            cout<<num[i-1]<<endl;
            }
        else if(i%2==0){
            cout<<"even"<<endl;    
        }
        else{
            cout<<"odd"<<endl;
        }
    }
    return 0;
}

/* get two intervals a and b from user.
  loop starts with a and runs till b.
  in the interval 
if num is less than 9 and greater than 0, print its english representation "one,"two,etc..
if number in the interval exceeds 9 then print whether it is odd or even*/
  
