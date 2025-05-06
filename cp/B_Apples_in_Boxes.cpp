#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        vector<int> arr(n, 0);
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        int maxi = *max_element(arr.begin(), arr.end());
        int mini = *min_element(arr.begin(), arr.end());
        int diff = maxi - mini;
        int cnt = count(arr.begin(), arr.end(), maxi);
        if(diff > k+1 || (diff == k+1 && cnt > 1)){
            cout << "Jerry" << endl;
            continue;
        }
        long long sum = 0;
        for(int i = 0;i<n;i++){
            sum += arr[i];
        }
        if(sum % 2 == 0){
            cout << "Jerry" << endl;
        } else {
            cout << "Tom" << endl;
        }
    }
    return 0;
}
