/*
 * Problem : Codeforces 1840C - Ski Resort
 * Rating  : 1000
 * Tags    : Combinatorics, Math, Two Pointers
 * Link    : https://codeforces.com/problemset/problem/1840/C
 */

#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int n, k, q; cin >> n >> k >> q;

    vector<ll> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    ll curr_streak = 0;
    ll total = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] <= q) curr_streak++;
        else curr_streak = 0;

        if (curr_streak >= k) total += (curr_streak - k + 1);
    }

    cout << total << '\n';
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    
    int t; cin >> t;

    while (t--) solve();
    
    return 0;
}