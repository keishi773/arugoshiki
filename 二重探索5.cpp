#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> s(n);
    for(int i = 0; i < n; i++){
        cin >> s[i];
    }
    int ans = 0;
    for(int i = 0; i < n; i++) {
        bool flg = true;
        // 回文の判定
        for(int j = 0; j < s[i].length(); j++){
            if(s[i][j] != s[i][(s[i].length() - 1) - j]) {
                // 回文ではない
                flg = false;
            }
        }
        if(flg) ans++;
    }
    cout << ans << endl;
    return 0;
}