// PS: Find union of two sorted arrays

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> arr1(n), arr2(m);
    for(int i = 0;i<n;i++){
        cin >> arr1[i];
    }
    for(int i = 0;i<m;i++){
        cin >> arr2[i];
    }
    int i = 0, j = 0;
    vector<int> unions;
    while(i<n&&j<m){
        if(arr1[i] <= arr2[j]){
            if(unions.empty() || unions.back() != arr1[i]){
                unions.push_back(arr1[i]);
            }
            i++;
        } else {
            if(unions.empty() || unions.back() != arr2[j]){
                unions.push_back(arr2[j]);
            }
            j++;
        }
    }
    while(i<n){
        if(unions.empty() || unions.back() != arr1[i]){
            unions.push_back(arr1[i]);
        }
        i++;
    }
    while(j<m){
        if(unions.empty() || unions.back() != arr2[j]){
            unions.push_back(arr2[j]);
        }
        j++;
    }
    for(int i = 0;i<unions.size();i++){
        cout << unions[i] << " ";
    }
    cout << endl;
    return 0;
}