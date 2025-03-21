#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n,x;
        cin >> n >> x;
        vector<int> arr(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        int ans = (n > 0) ? 2 * (x - arr[n-1]) : 2 * x;
        vector<int> copy = arr;
        copy.insert(copy.begin() + 0, 0);
        copy.push_back(x);
        int diff = 0, maxDiff = 0;
        for(int i = 0; i <= n; i++){
            diff = copy[i+1] - copy[i];
            if(diff > maxDiff){
                maxDiff = diff;
            }
        }
        int res = ans > maxDiff? ans : maxDiff;
        cout << res << endl;
    }
    return 0;
}