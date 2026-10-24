/*
 * Problem : Codeforces 1873C - Target Practice
 * Rating  : 800
 * Tags    : Implementation, Math
 * Link    : https://codeforces.com/problemset/problem/1873/C
 */

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int total = 0;

    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            char x; cin >> x;

            if (x == '.') continue;
            else {
                if (i == 1 || j == 1 || i == 10 || j == 10) total += 1;
                else if (i == 2 || j == 2 || i == 9 || j == 9) total += 2;
                else if (i == 3 || j == 3 || i == 8 || j == 8) total += 3;
                else if (i == 4 || j == 4 || i == 7 || j == 7) total += 4;
                else if (i == 5 || j == 5 || i == 6 || j == 6) total += 5;
            }
        }
    }

    cout << total << '\n';
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    
    int t; cin >> t;

    while (t--) solve();
    
    return 0;
}

// 1-10, 2-9, 3-8, 4-7, 5-6