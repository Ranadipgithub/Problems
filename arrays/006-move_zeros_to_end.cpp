#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0;i<n;i++){
        cin >> arr[i];
    }
    int idx = -1;
    for(int i = 0;i<n;i++){
        if(arr[i] == 0){
            idx = i;
            break;
        }
    }
    if(idx != -1){
        for(int i = idx+1;i<n;i++){
            if(arr[i] != 0){
                swap(arr[i], arr[idx]);
                idx++;
            }
        }
    }
    for(int i = 0;i<n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}