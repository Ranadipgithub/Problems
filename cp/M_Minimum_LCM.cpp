#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        long long ans = INT_MAX;
        long long ansA = 1, ansB = n-1;
        for(long long i = 1;i*i <= n;i++){
            if(n % i == 0){
                long long a = i, b = n/i;
                if(a <= n/2){
                    long long temp = lcm(a, n-a);
                    if(temp < ans){
                        ans = temp;
                        ansA = a;
                        ansB = n-a;
                    }
                }
                if(b <= n/2){
                    long long temp = lcm(b, n-b);
                    if(temp < ans){
                        ans = temp;
                        ansA = b;
                        ansB = n-b;
                    }
                }
            }
        }
        cout << ansA << " " << ansB << endl;
    }
    return 0;
}
