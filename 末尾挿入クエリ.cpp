#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int q;
    cin >> q;
    for(int _ = 0; _ < q; ++_) {
        int type;
        cin >> type;
        if(type == 0) {
            int k;
            cin >> k;
            if(k > a.size() - 1) {
                cout << "Error" << endl;
            } else {
                cout << a[k] << endl;
            }
        } else {
            int v;
            cin >> v;
            a.push_back(v);
        }
    }
    return 0;
}