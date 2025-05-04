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
        if(k < n/2){
            cout << -1 << endl;
            continue;
        }
        for(int i = 0;i<n;i++){
            if(i%2 == 0){
                cout << "A";
            } else{
                cout << "B";
            }
        }
        cout << endl;
        int cnt = k - n/2;
        for(int i = 0;i<n;i++){
            if(i%2 == 1){
                cout << "B";
            }else if(cnt){
                cnt--;
                cout << "A";
            } else{
                cout << "C";
            }
        }
        cout << endl;
    }
    return 0;
}