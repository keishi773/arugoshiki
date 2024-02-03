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
        // insert k,v
        if(type == 0) {
            int k,v;
            cin >> k >> v;
            a.insert(a.begin() + k, v);
        } else if(type == 1) {
            int k;
            cin >> k;
            a.erase(a.begin() + k);
        } else if(type == 2) {
            int v;
            cin >> v;
            int ans = 0;
            ans = count(a.begin(), a.end(), v);
            cout << ans << endl;
        }
    }
    return 0;
}