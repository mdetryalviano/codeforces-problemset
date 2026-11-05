/*
 * Problem : Codeforces 2132A - Homework
 * Rating  : 800
 * Tags    : Brute Force, Strings, Implementation
 * Link    : https://codeforces.com/problemset/problem/2132/A
 */

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    string a; cin >> a;
    
    int m; cin >> m;
    string b, c; cin >> b; cin >> c; 

    string vlad = "", dima = "";

    for (int i = 0; i < m; i++) {
        if (c[i] == 'D') a += b[i];
        else if (c[i] == 'V') a = b[i] + a;
    }

    cout << a << '\n';
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    
    int t; cin >> t; 

    while (t--) solve();
    
    return 0;
}