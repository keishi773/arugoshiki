#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, i;
    cin >> a >> i;
    // 2^i
    int i2 = (1 << i);
    cout << (a & i2) << endl;
    return 0;
}