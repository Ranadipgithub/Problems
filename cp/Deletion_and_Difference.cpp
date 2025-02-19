#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        unordered_map<int, int> mp;
        
        for (int i = 0; i < n; i++){
            cin >> arr[i];
            mp[arr[i]]++;
        }
        
        int odds = 0;       
        bool zeros = false;  
        
        for(auto &p : mp){
            int x = p.first;
            int freq = p.second;
            if(x == 0){
                if(freq > 0)
                    zeros = true; 
            } else {
                if(freq % 2 == 1)
                    odds++;   
                if(freq / 2 > 0)
                    zeros = true;  
            }
        }
        
        int answer = odds + (zeros ? 1 : 0);
        cout << answer << endl;
    }
    
    return 0;
}
