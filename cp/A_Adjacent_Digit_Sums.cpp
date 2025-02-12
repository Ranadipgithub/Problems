#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;
        if(y == x+1){
            cout << "YES" << endl;
            continue;
        }
        int cal = x - y + 1;
        if (cal >= 0 && cal % 9 == 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        } 
    }
    return 0;
}