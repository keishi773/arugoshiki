#include <bits/stdc++.h>
using namespace std;

int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int main() {
    int h,w;
    cin >> h >> w;
    vector<vector<int>> grid(h, vector(w, 0));
    for(int i = 0; i < h; i++) {
        string s;
        cin >> s;
        for(int j = 0; j < w; j++){
            if(s[j] == '#') {
                grid[i][j] = 1;
            } else {
                grid[i][j] = 0;
            }
        }
    }
    int q;
    cin >> q;
    for(int _ = 0; _ < q; ++_) {
        int ans = 0;
        int x,y;
        cin >> x >> y;
        for(int d = 0; d < 4; d++) {
            int nx = x + dx[d];
            int ny = y + dy[d];
            if(0 <= nx && nx < h && 0 <= ny && ny < w) {
                ans += grid[nx][ny];
            }
        }
        cout << ans << endl;
    }
    return 0;
}