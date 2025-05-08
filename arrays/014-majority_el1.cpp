// Problem Statement: Given an array of size n, find the majority element. The majority element is the element that appears more than n/2 times in the array. You may assume that the majority element always exists in the array.
// https://leetcode.com/problems/majority-element/description/

#include <bits/stdc++.h>
using namespace std;

int majorityEl(vector<int>&arr, int n){
    map<int, int> mpp;
    for(int i = 0;i<n;i++){
        mpp[arr[i]]++;
        if(mpp[arr[i]] > n/2){
            return arr[i];
        }
    }
}

int majorityEl2(vector<int>&arr, int n){
    int el = arr[0], count = 0;
    for(int i = 1;i<n;i++){
        if(count == 0){
            el = arr[i];
        }
        if(arr[i] == el){
            count++;
        } else{
            count--;
        }
    }
    count = 0;
    for(int i = 0;i<n;i++){
        if(arr[i] == el){
            count++;
        }
    }
    if(count > n/2){
        return el;
    } else{
        return -1; 
    }
}


int main(){
    int n;
    cin >> n;
    vector<int>arr(n);
    for(int i = 0;i<n;i++){
        cin >> arr[i];
    }
    cout<<majorityEl2(arr, n)<<endl;
    return 0;
}