/*
 * Problem : Codeforces 706B - B. Interesting drink
 * Rating  : 1100
 * Tags    : DP, Binary Search, Implementation
 * Link    : https://codeforces.com/problemset/problem/706/B
 */

#include <bits/stdc++.h>

using namespace std;

const int MAX_PRICE = 100000;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n;
    cin >> n;
 
    vector<int> cnt(MAX_PRICE + 1, 0);
    vector<int> dp(MAX_PRICE + 1, 0);
 
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        cnt[x]++;
    }
 
    for (int h = 1; h <= MAX_PRICE; h++) {
        dp[h] = dp[h - 1] + cnt[h];
    }
 
    int q;
    cin >> q;
    while (q--) {
        int m;
        cin >> m;
 
        if (m > MAX_PRICE) {
            cout << n << "\n";
        } else {
            cout << dp[m] << "\n";
        }
    }
 
    return 0;
}