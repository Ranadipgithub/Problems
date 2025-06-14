#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        string s(n, '0');
        for(int i = 0; i < k; i++){
            s[i] = '1';
        }
        cout << s << endl;
    }
    return 0;
}
