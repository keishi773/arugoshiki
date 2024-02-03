#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> counter(100001, 0);
    for(int i = 0; i < n; i++) {
        int g; cin >> g;
        a[i] = g;
        counter[g]++;
    }
    int q;
    cin >> q;
    for(int _ = 0; _ < q; _++) {
        int v;
        cin >> v;
        cout << counter[v] << endl;
    }
    return 0;
}