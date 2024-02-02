#include <bits/stdc++.h>
using namespace std;

int main() {
    int l,r;
    cin >> l >> r;
    int ans = 0;
    for(int i = l; i <= r; i++) {
        int i1 = i % 10;
        for(int j = i + 1; j <= r; j++) {
            int j1 = j % 10;
            // cout << i1 << endl;
            // cout << j1 << endl;
            if(i1 == j1) {
                ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}