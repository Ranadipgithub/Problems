#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--){
        long long X, a;
        cin >> X >> a;
        int generators = 1;
        long long capacita = a;
        
        while(capacita < X){
            capacita *= 2;
            generators++;
        }
        
        cout << generators << endl;
    }
    
    return 0;
}
