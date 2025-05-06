#include<bits/stdc++.h>
using namespace std;

// better approach
int findSMax(vector<int>&arr, int n){
    int maxi = *max_element(arr.begin(), arr.end());
    int smaxi = INT_MIN;
    bool found = false;
    for(int i = 0;i<n;i++){
        if(arr[i] > smaxi && arr[i] != maxi){
            smaxi = arr[i];
            found = true;
        }
    }
    return found? smaxi: -1;
}

int findSMin(vector<int>&arr, int n){
    int mini = *min_element(arr.begin(), arr.end());
    int smini = INT_MAX;
    bool found = false;
    for(int i = 0;i<n;i++){
        if(arr[i] < smini && arr[i] != mini){
            smini = arr[i];
            found = true;
        }
    }
    return found? smini: -1;
}

//optimal approach using single loop
int findSMaxi(vector<int>&arr, int n){
    int maxi = INT_MIN;
    int smaxi = INT_MIN;
    bool found = false;
    for(int i = 0;i<n;i++){
        if(arr[i] > maxi){
            smaxi = maxi;
            maxi = arr[i];
        } else if(arr[i] > smaxi && arr[i] != maxi){
            smaxi = arr[i];
            found = true;
        }
    }
    return found?smaxi:-1;
}

int findSMini(vector<int>&arr, int n){
    int mini = INT_MAX;
    int smini = INT_MAX;
    bool found = false;
    for(int i = 0;i<n;i++){
        if(arr[i] < mini){
            smini = mini;
            mini = arr[i];
        } else if(arr[i] < smini && arr[i] != mini){
            smini = arr[i];
            found = true;
        }
    }
    return found?smini:-1;
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0;i<n;i++){
        cin >> arr[i];
    }
    cout << findSMaxi(arr, n);
    return 0;
}