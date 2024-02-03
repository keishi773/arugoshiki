#include <bits/stdc++.h>
using namespace std;

int main() {
    int h,w;
    cin >> h >> w;
    // gridで管理する
    vector<vector<int>> grid(h, vector<int>(w, 0));
    for(int i = 0; i < h; i++) {
        string s;
        cin >> s;
        for(int j = 0; j < w; j++) {
            if(s[j] == '#') {
                grid[i][j] = 1;
            } else {
                grid[i][j] = 0;
            }
        }
    }
    int p,q;
    cin >> p >> q;
    // 答えを表す変数
    int ans = 0;
    // 縦方向を調べる
    for(int i = 0; i < h; ++i) {
        ans += grid[i][q];
    }
    // 横方向を調べる
    for(int j = 0; j < w; ++j) {
        ans += grid[p][j];
    }
    ans -= grid[p][q];
    cout << ans << endl;
    return 0;
}