// problem statement: Problem Statement: Given an integer N and an array of size N-1 containing N-1 numbers between 1 to N. Find the number(between 1 to N), that is not present in the given array.

#include<bits/stdc++.h>
using namespace std;

int findMissing(vector<int>&arr, int n){
    int total = (n*(n+1))/2;
    int sum = 0;
    for(int i = 0;i<n;i++){
        sum += arr[i];
    }
    return total - sum;
}

int findMissing2(vector<int>&arr, int n){
    int xor1 = 0, xor2 = 0;
    for(int i = 0;i<n;i++){
        xor1 ^= arr[i];
        xor2 ^= (i+1);
    }
    return xor1^xor2;
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0;i<n;i++){
        cin >> arr[i];
    }
    cout << findMissing(arr, n) << endl;
    return 0;
}