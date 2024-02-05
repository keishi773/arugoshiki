#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    // 先頭も後ろも最初は0のまま
    int head = 0, tail = 0;
    vector<int> a(n, -1);
    for(int _ = 0; _ < q; _++) {
        int type;
        cin >> type;
        if(type == 0) {
            // 添え字のtailに要素を格納してtailを+1する
            int v; cin >> v;
            a[tail] = v;
            tail++;
            if(tail == n) {
                tail = 0;
            }
        } else {
            // headの値を削除して-1にする
            a[head] = -1;
            head++;
            if(head == n) {
                head = 0;
            }
        }
    }
    for(int i = 0; i < a.size(); i++) {
        cout << a[i] << endl;
    }
    return 0;
}