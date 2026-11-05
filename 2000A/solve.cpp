/*
 * Problem : Codeforces 2000A - Primary Task
 * Rating  : 800
 * Tags    : Implementation, Math, String
 * Link    : https://codeforces.com/problemset/problem/2000/A
 */

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a; cin >> a;

    if ((102 <= a && a <= 109) || (1010 <= a && a <= 1099)) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    
    int t; cin >> t;
    
    while (t--) solve();
    
    return 0;
}