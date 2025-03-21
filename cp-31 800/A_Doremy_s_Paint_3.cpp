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
        map<int, int> mpp;
        for(int i = 0; i < n; i++){
            mpp[arr[i]]++;
        }
        if(mpp.size() > 2){
            cout << "No" << endl;
            continue;
        }
        if (mpp.size() == 1 || abs(mpp.begin()->second - next(mpp.begin())->second) <= 1) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
    return 0;
}