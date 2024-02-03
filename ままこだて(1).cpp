#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a;
    for(int i = 1; i <= n; i++){
        a.push_back(i);
    }
    // 操作
    while(a.size() > 1) {
        // 先頭の要素を削除
        a.erase(a.begin());
        // 2番目を末尾に移動
        a.push_back(a[0]);
        a.erase(a.begin());
    }
    cout << a[0] << endl;
    return 0;
}