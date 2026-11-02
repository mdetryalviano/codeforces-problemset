/*
 * Problem : Codeforces 509A - Maximum in Table
 * Rating  : 800
 * Tags    : Implementation, Brute Force
 * Link    : https://codeforces.com/problemset/problem/509/A
 */

#include <bits/stdc++.h>
using namespace std;

void process(int n) {
    vector<vector<int>> a(n, vector<int>(n));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0) {
                a[i][j] = 1;
            } else {
                if (j == 0) a[i][j] = 1; 
                else a[i][j] = a[i - 1][j] + a[i][j - 1];
            }
        }
    }

    cout << a[n - 1][n - 1];
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    
    int n; cin >> n;

    if (n <= 1) cout << n;
    else process(n);
    
    return 0;
}