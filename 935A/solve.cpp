/*
 * Problem : Codeforces 935A - Fafa and his Company
 * Rating  : 800
 * Tags    : Brute Force, Implementation
 * Link    : https://codeforces.com/problemset/problem/935/A
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    
    int n; cin >> n;

    int ans = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) ans++;
    }

    cout << ans;
    
    return 0;
}