#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        vector<int> arr(5);
        for(int i = 0; i < 5; i++){
            cin >> arr[i];
        }
        int sum = accumulate(arr.begin(), arr.end(), 0);
        if(sum >= 35){
            cout << 0<<endl;
            continue;
        }
        vector<int> diff(5);
        for(int i = 0;i<5;i++){
            diff[i] = 10-arr[i];
        }
        sort(diff.begin(), diff.end(), greater<int>());
        int ans = 0;
        int req = 35-sum;
        for(int i = 0;i<5;i++){
            req -= diff[i];
            ans += 100;
            if(req <= 0){
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}