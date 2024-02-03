#include <bits/stdc++.h>
using namespace std;

int main() {
    int h,w;
    cin >> h >> w;
    vector<string> s(h);
    for(int i = 0; i < h; i++) {
        cin >> s[i];
    }
    vector<string> t(h);
    for(int i = 0; i < h; i++) {
        cin >> t[i];
    }
    int diffcnt = 0;
    for(int i = 0; i < h; i++) {
        for(int j = 0; j < w; j++) {
            if(s[i][j] != t[i][j]) {
                diffcnt++;
            }
        }
    }
    cout << diffcnt << endl;
}