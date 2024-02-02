#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<int> b(10);
    for(int i = 0; i < n; i++) {
        b[a[i]]++;
    }
    int pos = 0;
    int max = -1;
    for(int i = 1; i < b.size(); i++) {
        if(max < b[i]) {
            max = b[i];
            pos = i;
        }
    }
    cout << pos << endl;
    return 0;
}