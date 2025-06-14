#include <iostream>
using namespace std;

bool solve(int x, int y, int prev) {
    for (int i = prev + 1; i <= max(x, y); i++) {
        if (x >= i || y >= i) {
            return true;
        }
    }
    return false; 
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y, k;
        cin >> x >> y >> k;
        bool p1 = false;

        for (int i = 1; i <= k; ++i) {
            if (x >= i && !solve(x - i, y, i)) {
                p1 = true;
                break;
            }
            if (y >= i && !solve(x, y- i, i)) {
                p1 = true;
                break;
            }
        }

        cout << (p1 ? "Alice" : "Bob") << endl;
    }
    return 0;
}
