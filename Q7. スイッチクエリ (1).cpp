#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,s;
    cin >> n >> s;
    int q;
    cin >> q;
    for(int _ = 0; _ < q; _++) {
        int type;
        cin >> type;
        if(type == 0) {
            // on
            int x;
            cin >> x;
            s = (s | (1 << x));
        } else {
            // off
            int x;
            cin >> x;
            // x桁目が1ならtrue
            if(s & (1 << x)) {
                cout << "on" << endl;
            } else {
                cout << "off" << endl;
            }
        }
    }
    return 0;
}