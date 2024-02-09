#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int ans = 0;
    vector<int> result;
    for(int i = 0; i <= 30; i++) {
        if(n & (1 << i)) {
            ans++;
            result.push_back(i);
        }
    }
    cout << ans << endl;
    for(int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}