#include <iostream>
#include <string>
using namespace std;

bool isAlt(const string &s) {
    for (int i = 1; i < s.size(); i++)
        if (s[i] == s[i-1])
            return false;
    return true;
}

bool oneFlipWorks(const string &s, char start) {
    int n = s.size(), first = -1, last = -1;
    string alt(n, ' ');
    alt[0] = start;
    for (int i = 1; i < n; i++)
        alt[i] = (alt[i-1] == '0' ? '1' : '0');
    for (int i = 0; i < n; i++) {
        if (s[i] != alt[i]) {
            if (first == -1) first = i;
            last = i;
        }
    }
    if (first == -1) return true;
    for (int i = first; i <= last; i++)
        if (s[i] == alt[i])
            return false;
    return true;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin >> T;
    while(T--){
        string s;
        cin >> s;
        int n = s.size();
        
        if(isAlt(s)){
            cout << 0 << "\n";
            continue;
        }
        
        int count0 = 0;
        for(char c : s)
            if(c == '0') count0++;
        
        bool balanced = (n % 2 == 0) ? (count0 == n/2) : (count0 == n/2 || count0 == n/2 + 1);
        if(balanced){
            cout << 1 << "\n";
            continue;
        }
        
        if(oneFlipWorks(s, '0') || oneFlipWorks(s, '1'))
            cout << 2 << "\n";
        else
            cout << 3 << "\n";
    }
    return 0;
}
