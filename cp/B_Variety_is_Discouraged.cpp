#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        vector<long long> arr(n);
        for(long long i = 0; i < n; i++){
            cin >> arr[i];
        }
        
        unordered_map<long long,long long> fq;
        for (long long i = 0; i < n; i++){
            fq[arr[i]]++;
        }
        
        long long start = -1, end = -1, maxLen = 0;
        long long curr = 0;
        for (long long i = 0; i < n; i++){
            if (fq[arr[i]] != 1) {
                long long len = i - curr;
                if (len > maxLen) {
                    maxLen = len;
                    start = curr;
                    end = i - 1;
                }
                curr = i + 1;
            }
        }
        long long len = n - curr;
        if (len > maxLen) {
            maxLen = len;
            start = curr;
            end = n - 1;
        }
        
        if (maxLen == 0) {
            cout << 0 << "\n";
        } else {
            cout << start + 1 << " " << end + 1 << "\n";
        }
    }
    return 0;
}
