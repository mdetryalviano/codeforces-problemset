/*
 * Problem : Codeforces 723A - The New Year: Meeting Friends
 * Rating  : 800
 * Tags    : Implementation, Math, Sortings
 * Link    : https://codeforces.com/problemset/problem/723/A
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    
    vector<int> x(3); for (int i = 0; i < 3; i++) cin >> x[i];
    sort(x.begin(), x.end());

    cout << abs(x[0] - x[1]) + abs(x[1] - x[2]);
    
    return 0;
}