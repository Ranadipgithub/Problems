#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> res(n);
        if(n%2 == 0){
            cout << -1 << endl;
            continue;
        }else{
            for(int i = 0; i < n; i++){
                res[i] = i + 1;
            }
            reverse(res.begin(), res.end());
        }
        for(int i = 0; i < n; i++){
            cout << res[i] << " ";
        }
        cout << endl;
    }
    return 0;
}