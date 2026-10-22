/*
 * Problem : Codeforces 581A - Vasya the Hipster
 * Rating  : 1100
 * Tags    : DP
 * Link    : https://codeforces.com/problemset/problem/581/A
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    
    int a, b; cin >> a >> b;

    int res1 = min(a,b);
    int res2 = abs(a-b)/2;

    cout << res1 << ' ' << res2;
    
    return 0;
}