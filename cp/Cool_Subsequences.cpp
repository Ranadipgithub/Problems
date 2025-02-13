#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin >> T;
    while(T--){
        int N;
        cin >> N;
        vector<int> A(N);
        unordered_map<int,int> freq;
        
        for (int i = 0; i < N; i++){
            cin >> A[i];
            freq[A[i]]++;
        }
        
        bool found = false;
        int prob;
        for(auto &p : freq){
            if(p.second >= 2){
                prob = p.first;
                found = true;
                break;
            }
        }
        
        if(!found){
            cout << -1 << "\n";
        } else {
            cout << 1 << "\n" << prob << "\n";
        }
    }
    return 0;
}
