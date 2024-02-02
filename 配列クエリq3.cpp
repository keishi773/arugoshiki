#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> a = {3,1,4,1,5,9,2,6,5,3};

    // 入力
    int Q;
    cin >> Q;
    for(int _ = 0; _ < Q; ++_) {
        int type;
        cin >> type;
        if(type == 0) {
            int k;
            cin >> k;
            cout << a[k] << endl;
        } else {
            int k,v;
            cin >> k >> v;
            a[k] = v;
        }
    }
}