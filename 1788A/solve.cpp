/*
 * Problem : Codeforces 1788A - One and Two
 * Rating  : 800
 * Tags    : Brute Force, Implementation, Math
 * Link    : https://codeforces.com/problemset/problem/1788/A
 */

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, total = 0; cin >> n;

    vector<int> a(n); 
    for (int i = 0; i < n; i++) {
        cin >> a[i]; if (a[i] == 2) total++;
    }

    if (total % 2 != 0) {
        cout << -1 << '\n';
        return;
    }

    if (total == 0) {
        cout << 1 << '\n';
        return;
    }

    int curr_two = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == 2) curr_two++;

        if (curr_two == total / 2) {
            cout << i + 1 << '\n';
            return;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    
    int t; cin >> t;

    while (t--) solve();
    
    return 0;
}