#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base:: sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    int n = s.length();
    int res = 0;
    int p2 = 1;
    for(int i = n-1;i>=0;i--){
        res += (s[i] - '0') * p2;
        p2 *= 2;
    }
    cout << res << endl;
    return 0;
}