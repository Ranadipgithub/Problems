#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        
        // Vector to store total sum of each array
        vector<ll> totals(n);
        // This will hold the sum of the inherent scores F(a) of all arrays.
        ll baseScore = 0;
        
        for (int i = 0; i < n; i++){
            ll tot = 0;     // total sum of current array
            ll inherent = 0; // score of current array (sum of its prefix sums)
            for (int j = 0; j < m; j++){
                int x;
                cin >> x;
                tot += x;
                inherent += tot; // add the current prefix sum
            }
            totals[i] = tot;
            baseScore += inherent;
        }
        
        // Sort arrays in descending order by their total sum
        sort(totals.begin(), totals.end(), greater<ll>());
        
        // Calculate the extra contribution when arrays are concatenated in the best order.
        ll extra = 0;
        for (int i = 0; i < n; i++){
            // The array at sorted index i (0-indexed) is placed at position i+1,
            // and its weight is (n - (i+1)) = n - 1 - i.
            extra += totals[i] * (n - 1 - i);
        }
        // Multiply by m because each previous array contributes its sum to each of the m elements in a later array.
        extra *= m;
        
        // The answer is the inherent (base) score plus the extra contribution.
        cout << baseScore + extra << "\n";
    }
    return 0;
}
