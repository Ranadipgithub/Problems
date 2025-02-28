#include<bits/stdc++.h>
using namespace std;

bool ps(long long num) {
  if (num < 0) {
    return false; 
  }
  long long root = round(sqrt(num));
  return root * root == num;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        if(n == 1){
            cout << -1 << endl;
            continue;
        }

        long long sum = 0;
        for(long long i = 1;i<=n;i++){
            sum += i;
        }
        if(ps(sum)){
            cout << -1 << endl;
            continue;
        }
        vector<long long> res(n);
        res[0] = 2;
        res[1] = 1;
        for(long long i = 2;i<n;i++){
            res[i] = i + 1;
        }

        long long pref = 0;
        for(long long i = 0;i<n;i++){
            pref += res[i];
            if(ps(pref)){
                swap(res[i], res[i + 1]);
                pref = pref - res[i+1] + res[i];
            }
        }

        for(long long i = 0;i<n;i++){
            cout << res[i] << " ";
        }
        cout << endl;
    }
    return 0;
}