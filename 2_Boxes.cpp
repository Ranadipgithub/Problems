#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int x, y, k;
        cin >> x >> y >> k;
        if(abs(x-y)%2 != k%2){
            cout << -1 << endl;
        } else {
            cout << abs(k - abs(x-y))/2 << endl;
        }
    }
    return 0;
}