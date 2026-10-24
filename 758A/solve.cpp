/*
 * Problem : Codeforces 758A - Holiday of Equality
 * Rating  : 800
 * Tags    : Implementation, Math
 * Link    : https://codeforces.com/problemset/problem/758/A
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    
    int n, max_burles = 0, total = 0; cin >> n;

    vector<int> a(n); for (int i = 0; i < n; i++) cin >> a[i];

    for (int i : a) {
        max_burles = max(max_burles, i);
    }

    for (int i : a) {
        total += max_burles - i;
    }

    if (n == 1) cout << 0;
    else cout << total;
    
    return 0;
}