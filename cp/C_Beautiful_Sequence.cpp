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
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }

        int idx = -1;

        for(int i = 0;i<n;i++){
            if(arr[i] == 1){
                idx = i;
                break;
            }
        }

        int count = 0;

        for(int i = idx;i<n;i++){
            
        }
        return 0;
    }
}