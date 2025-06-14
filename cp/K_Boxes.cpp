#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;
    while(t--){
        long long n, k;
        cin >> n>>k;
        vector<long long> arr(n);
        for(long long i = 0; i < n; i++){
            cin >> arr[i];
        }
        vector<long long> brr(n);
        for(long long i = 0; i < n; i++){
            cin >> brr[i];
        }
        unordered_map<long long, long long> mpp;
        for(long long i = 0;i<n;i++){
            mpp[arr[i]] = i;
        }
        vector<pair<long long, long long>> v;
        for(long long i = 0;i<n;i++){
            v.push_back({arr[i], brr[i]});
        }
        sort(v.begin(), v.end());
        vector<long long> ans(n, 0);
        priority_queue<pair<long long, long long>, vector<pair<long long, long long>>, greater<pair<long long, long long>>> pq;
        long long sum = 0;
        for(long long i = 0;i<n;i++){
            long long level = v[i].first;
            long long idx = mpp[level];
            if(pq.empty()) ans[idx] = 0;
            else ans[idx] = sum;

            long long coins = v[i].second;
            if(pq.size() < k){
                pq.push({coins, 0});
                sum += coins;
            }
            else if(k>0 && coins>pq.top().first){
                sum -= pq.top().first;
                pq.pop();
                pq.push({coins, 0});
                sum += coins;
            }
        }
        for(int i = 0;i<n;i++){
            cout << ans[i] << ' ';
        }
        cout << endl;
    }
    return 0;
}
