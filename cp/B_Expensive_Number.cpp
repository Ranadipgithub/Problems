#include <iostream>
#include <string>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;

        int cnt1 = 0;
        for(int i = s.length() - 1; i >= 0; i--){
            if(s[i] == '0'){
                cnt1++;
            } else{
                break;
            }
        }
        int cnt2 = 0;
        for(char ch : s){
            if(ch != '0'){
                cnt2++;
            }
        }
        cout << cnt1 + (cnt2 - 1) << "\n";
    }
    return 0;
}
