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
        vector<int> arr(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        int c0 = 0, c1 = 0, c2 = 0, c3 = 0, c5 = 0;
        int ans = 0;
        for(int i = 0;i<n;i++){
            if(arr[i] == 0) c0++;
            if(arr[i] == 1) c1++;
            if(arr[i] == 2) c2++;
            if(arr[i] == 3) c3++;
            if(arr[i] == 5) c5++;
            if(c0 >= 3 && c1 >= 1 && c2 >= 2 && c3 >= 1 && c5 >= 1){
                ans = i+1;
                break;
            }            
        }
        cout << ans << endl;
    }
    return 0;
}