#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    // 先頭に追加された要素の管理
    vector<int> a_front;
    int q;
    cin >> q;
    for(int _ = 0; _ < q; ++_){
        int type;
        cin >> type;
        if(type == 0) {
            // a_frontの末尾に追加
            // a_frontを反転させたもの+a が本来の配列になる
            int v; cin >> v;
            a_front.push_back(v);
        } else if(type == 1) {
            // aの末尾に追加
            int v; cin >> v;
            a.push_back(v);
        } else {
            // getの処理
            int k; cin >> k;
            if(k < a_front.size()) {
                // 出力対象がa_front配列の中になる
                // 反転してるから末尾からk番目が出力するもの
                cout << a_front[(a_front.size() - 1) - k] << endl;
            } else {
                if(k > a_front.size() + a.size() - 1) {
                    cout << "Error" << endl;
                } else {
                    // a配列の要素を特定する
                    int lena = k - a_front.size();
                    cout << a[lena] << endl;
                }
            }
        }
    }
    return 0;
}