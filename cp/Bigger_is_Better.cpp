#include <iostream>
#include <string>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin >> T;
    while(T--){
        int N;
        cin >> N;
        string A;
        cin >> A;
        
        bool allz = true;
        for(char c : A) {
            if(c != 'z'){
                allz = false;
                break;
            }
        }
        
        if(allz){
            cout << -1 << "\n";
        } else {
            cout << string(N, 'z') << "\n";
        }
    }
    
    return 0;
}
