/* Chef's son wants to go on a roller coaster ride. 
The height of Chef's son is X inches while the minimum height required to go on the ride is H inches. 
Determine whether he can go on the ride or not.*/

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int x, h;
        cin >> x >> h;
        if (x >= h) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
