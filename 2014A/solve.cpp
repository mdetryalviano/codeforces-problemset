/*
 * Problem : Codeforces 2014A - Robin Helps
 * Rating  : 800
 * Tags    : Greedy, Implementation
 * Link    : https://codeforces.com/problemset/problem/2014/A
 */

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k; cin >> n >> k;

    int g = 0, r = 0;

    for (int i = 0; i < n; i++) {
        int a; cin >> a;

        if (a >= k) g += a;
        else if (a == 0) {
            if (g > 0) {
                g--; r++;
            }
        }
    }

    cout << r << '\n';
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);

    int t; cin >> t;

    while (t--) solve();
    
    return 0;
}