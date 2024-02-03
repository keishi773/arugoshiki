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
    int q;
    cin >> q;
    for(int _ = 0; _ < q; _++) {
        int type;
        cin >> type;
        if(type == 0) {
            // insert
            int v; cin >> v;
            counter[v]++;
        } else if(type == 1) {
            // delete
            int v; cin >> v;
            counter[v] = 0;
        } else if(type == 2) {
            int v; cin >> v;
            cout << counter[v] << endl;
        }
    }
    return 0;
}