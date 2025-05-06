#include<bits/stdc++.h>
using namespace std;

void insertionSort(vector<int>&arr, int n){
    for(int i = 0;i<n;i++){
        int j = i;
        while(j>0 && arr[j] < arr[j-1]){
            swap(arr[j], arr[j-1]);
            j--;
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
    insertionSort(arr,n);
    for(int i = 0;i<n;i++){
        cout<< arr[i] << " ";
    }
}