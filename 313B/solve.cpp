/*
 * Problem : Codeforces 313B - B. Ilya and Queries
 * Rating  : 1100
 * Tags    : DP, Implementation
 * Link    : https://codeforces.com/problemset/problem/313/B
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    
    string s; cin >> s;
    
    int n = s.length(); 
    vector<int> dp(n + 1, 0);

    for (int i = 1; i < n; i++) 
        dp[i + 1] = dp[i] + (s[i] == s[i - 1] ? 1 : 0);

    int m; cin >> m;

    while (m--) {
        int l, r; cin >> l >> r;

        cout << dp[r] - dp[l] << '\n';
    }
    
    return 0;
}