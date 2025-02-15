#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, k;
    cin >> n >> k;
    
    vector<string> codes(n);
    for (int i = 0; i < n; i++) {
        cin >> codes[i];
    }
    
    string crt;
    cin >> crt;
    
    int crtLen = crt.size();
    int less = 0, equal = 0;
    
    for (int i = 0; i < n; i++) {
        int len = codes[i].size();
        if (len < crtLen)
            less++;
        else if (len == crtLen)
            equal++;
    }
    
    int best = less + (less / k) * 7 + 1;
    
    int wrg = less + (equal - 1);
    int worst = wrg + (wrg / k) * 7 + 1;
    
    cout << best << " " << worst << "\n";
    
    return 0;
}
