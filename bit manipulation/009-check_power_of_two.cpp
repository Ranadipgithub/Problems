#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base:: sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    if((n & (n-1)) == 0) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}