#include <bits/stdc++.h>
using namespace std;

int main() {
    int h,w,x,y;
    cin >> h >> w >> x >> y;
    vector<string> a(h);
    for(int i = 0; i < h; i++) {
        cin >> a[i];
    }
    vector<string> newa(x);
    for(int i = x-1; i < x+2; i++){
        for(int j = y-1; j < y+2; j++){
            cout << a[i][j];
        }
        cout << endl;
    }
    return 0;
}