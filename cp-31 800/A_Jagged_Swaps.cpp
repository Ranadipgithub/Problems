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
        vector<int> copy = arr;
        sort(copy.begin(), copy.end());
        if(arr == copy){
            cout << "YES" << endl;
            continue;
        }
        int mini = *min_element(arr.begin(), arr.end());
        if(arr[0] != mini) {
            cout << "NO" << endl;
            continue;
        } else{
            cout << "YES" << endl;
        }
    }
    return 0;
}