#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;
    while(t--){
        long long n, h;
        cin >> n >> h;
        long long dam1 = 0, dam2 = 0;
        for(long long i = 0;i<n;i++){
            long long s, d;
            cin >> s >> d;
            if(s == 1) dam1 = max(dam1, d);
            else dam2 = max(dam2, d);
        }

        if (dam1 == 0) {
            long long uses = (h + dam2 - 1) / dam2;
            cout << uses * 2 << endl;
            continue;
        }

        if(dam2 < 2*dam1){
            long long low = 0, high = h/dam1;
            while(low <= high){
                long long mid = low + (high - low)/2;
                if(mid*dam1 >= h){   
                    high = mid-1;
                } else{
                    low = mid + 1;
                }
            }
            cout << low << endl;    
            continue;
        } else{
            long long low = 0, high = h/dam1;
            while(low <= high){
                long long mid = low + (high - low)/2;
                long long twos = mid/2;
                long long ones = mid - 2*twos;
                long long total = twos*dam2 + ones*dam1;
                if(total >= h){
                    high = mid - 1;
                } else{
                    low = mid + 1;
                }
            }
            cout << low << endl;    
            continue;
        }
    }
    return 0;
}
