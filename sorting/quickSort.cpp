#include<bits/stdc++.h>
using namespace std;

int helper(vector<int>&arr, int low, int high){
    int pivot = arr[low];
    int i = low, j = high;
    while(i < j){
        while(arr[i] <= pivot && i <= high-1){
            i++;
        }
        while(arr[j] > pivot && j >= low+1){
            j--;
        }
        if(i<j) swap(arr[i], arr[j]);
    }
    swap(arr[low], arr[j]);
    return j;
}

void quickSort(vector<int>&arr, int low, int high){
    if(low < high){
        int partIdx = helper(arr, low, high);
        quickSort(arr, low, partIdx-1);
        quickSort(arr, partIdx+1, high);
    }
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0;i<n;i++){
        cin >> arr[i];
    }
    int low = 0;
    int high = n-1;
    quickSort(arr,low, high);
    for(int i = 0;i<n;i++){
        cout<< arr[i] << " ";
    }
}