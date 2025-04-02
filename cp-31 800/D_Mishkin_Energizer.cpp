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
        cin>>s;
        int c1 = 0, c2 = 0, c3 = 0;
        for(int i = 0;i<n;i++){
            if(s[i] == 'L') c1++;
            if(s[i] == 'I') c2++;
            if(s[i] == 'T') c3++;
        }
        if(c1 == c2 == c3){
            cout << 0 << endl;
            continue;
        }
        int cnt = 0;
        for(int i = 0;i<n;i++){
            int sum = c1+c2+c3;
            if(sum + i % 3 == 0){
                cnt = i;
                break;
            }
        }
        
    }
    return 0;
}