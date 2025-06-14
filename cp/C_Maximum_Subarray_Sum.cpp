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
        string s;
        cin >> s;
        vector<int> arr(n, 0);
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        int maxi = INT_MIN;
        int sum = 0;
        for (int i = 0; i < n; i++) {

            sum += s[i];
    
            if (sum > maxi) {
                maxi = sum;
            }
    
            if (sum < 0) {
                sum = 0;
            }
        }
    }
    return 0;
}