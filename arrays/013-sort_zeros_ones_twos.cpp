// Sort an array of 0's, 1's and 2's

#include<bits/stdc++.h>
using namespace std;

void sortArray(vector<int>&arr, int n){
    int low = 0, mid = 0, high = n-1;
    while(mid <= high){
        if(arr[mid] == 0){
            swap(arr[low], arr[mid]);
            mid++;
            low++;
        } else if(arr[mid] == 1){
            mid++;
        } else{
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0;i<n;i++){
        cin >> arr[i];
    }
    sortArray(arr, n);
    for(int i = 0;i<n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}