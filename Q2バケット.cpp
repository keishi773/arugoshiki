#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> counter(500001, 0);
    for(int i = 0; i < n; i++) {
        int b; cin >> b;
        a[i] = b;
        counter[b]++;
    }
    // 最大の値を取得
    int mx = -1;
    for(int i = 0; i < 500001; i++) {
        mx = max({mx, counter[i]});
    }
    // 最も個数が多い値の中で最小のものを選ぶ
    int ans = -1;
    for(int i = 0; i < 500001; i++){
        if(counter[i] == mx) {
            ans = i;
            break;
        }
    }
    cout << ans << endl;
    return 0;
}