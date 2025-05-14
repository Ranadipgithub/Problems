#include<bits/stdc++.h>
using namespace std;

bool check(vector<long long> arr, long long x, long long y){
    long long n = arr.size();
    long long temp = x;
    for(long long i = 0;i<n;i++){
        temp %= arr[i];
    }
    if(temp == y){
        return true;
    }
    return false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;
    while(t--){
        long long n,x,y;
        cin >> n >> x >> y;
        vector<long long> arr(n);
        for(long long i = 0; i < n; i++){
            cin >> arr[i];
        }
        vector<long long> res;
        for(long long k = 1;k<=n;k++){
            vector<long long> brr(arr.begin(), arr.begin()+k);
            sort(brr.begin(), brr.end());
            bool fg = check(brr, x, y);
            while(!fg && next_permutation(brr.begin(), brr.end())){
                fg = check(brr, x, y);
            }
            if(fg){
                res.push_back(k);
            }
        }
        cout << res.size() << endl;
        for(long long i = 0;i<res.size();i++){
            cout << res[i] << " ";
        }
        cout << endl;
    }
    return 0;
}