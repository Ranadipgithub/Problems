#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        if(n > 1 && k == 0){
            cout << -1 << endl;
            continue;
        }
        if(n == 1 && k == 0){
            cout << "A" << endl;
            cout << "B" << endl;
            continue;
        }
        string s1 = "";
        string s2 = "";
        int x = n%3;
        if(x == 0){
            for(int i = 0; i < n/3; i++){
                s1 += "ABC";
            }
        } else if(x == 1){
            for(int i = 0;i<n/3;i++){
                s1 += "ABC";
            }
            s1 += "A";
        } else if(x == 2){
            for(int i = 0;i<n/3;i++){
                s1 += "ABC";
            }
            s1 += "AB";
        }
        for(int i = 0;i<n;i++){
            s2 += 'A';
        }
        int idx = 0;
        for(int i = n-k;i<n;i++){
            s2[i] = s1[idx++];
        }
        cout << s1 << endl;
        cout << s2 << endl;
    }
    return 0;
}