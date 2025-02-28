#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int k;
        cin >> k;
        if(k%3 == 1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}