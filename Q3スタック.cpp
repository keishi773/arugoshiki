#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int q;
    cin >> q;
    for(int _ = 0; _ < q; ++_){
        int type;
        cin >> type;
        if(type == 0) {
            int v;
            cin >> v;
            a.push_back(v);
        } else {
            // 配列が空
            if(a.empty()) {
                cout << "Error" << endl;
            } else {
                // 末尾の配列を削除
                cout << a.back() << endl;
                // 削除
                a.pop_back();
            }
        }
    }
    return 0;
}