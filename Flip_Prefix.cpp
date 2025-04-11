#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<int> fq(2, 0);
        int cnt = 0;
        set<string> st;
        for(int i = 0;i<n;i++){
            fq[s[i]-'0']++;
            if(fq[0] == fq[1]){
                cnt++;
        
            }
        }
        cout << 1+cnt << endl;
    }
    return 0;
}