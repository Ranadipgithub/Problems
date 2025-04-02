#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n, m, k;
        cin >> n >> m >> k;
        int seats = n*m;
        int pr = seats / k;
        int rem = seats % k;
        int ma = pr + rem;
        int maxi = ma/n + (ma % n > 0);
        int it = n == 1? m : n;
        long long gaps = it - maxi + 1;
        
        long long L_min = (maxi + gaps - 1) / gaps; 
        
        cout << L_min << endl;

    }
    return 0;
}