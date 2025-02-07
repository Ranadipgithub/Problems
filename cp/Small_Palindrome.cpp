#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int x, y;
        cin >> x >> y;
        string fh = "";
        string res = "";
        for(int i = 0; i < x/2; i++){
            fh += '1';
        }
        for(int i = 0; i < y/2; i++){
            fh += '2';
        }
        string sh = fh;
        reverse(sh.begin(), sh.end());
        res = fh + sh;
        cout << res << endl;
    }
    return 0;
}