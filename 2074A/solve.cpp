/*
 * Problem : Codeforces 2074A - Draw a Square
 * Rating  : 800
 * Tags    : Geometry, Implementation
 * Link    : https://codeforces.com/problemset/problem/2074/A
 */

#include <bits/stdc++.h>
using namespace std;

// void solve() {
//     int l, r, d, u; cin >> l >> r >> d >> u;

//     bool lb = (l == r) && (l == d) && (l == u);
//     bool rb = (r == l) && (r == d) && (r == u);
//     bool db = (d == l) && (d == r) && (d == u);
//     bool ub = (u == l) && (u == r) && (u == d);

//     if (lb && rb && db && ub) cout << "Yes\n";
//     else cout << "No\n";
// }

void solve() {
    int l, r, d, u; cin >> l >> r >> d >> u;

    if ((l == r) && (l == d) && (l == u)) cout << "Yes\n";
    else cout << "No\n";
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    
    int t; cin >> t;

    while (t--) solve();
    
    return 0;
}