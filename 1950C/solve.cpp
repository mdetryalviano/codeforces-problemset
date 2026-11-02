/*
 * Problem : Codeforces 1950C - Clock Conversion
 * Rating  : 800
 * Tags    : Implementation, Math
 * Link    : https://codeforces.com/problemset/problem/1950/C
 */

#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s, ans = ""; cin >> s;

    string hour_s = s.substr(0, 2);
    string minute_s = s.substr(3, 2);
    int hour_i = stoi(hour_s);

    if (hour_i < 12) {
        if (hour_i == 0) ans += "12:" + minute_s + " AM";
        else ans += hour_s + ':' + minute_s + " AM";
    } else {
        int hour_i_final = hour_i;

        if (hour_i_final != 12) hour_i_final -= 12;

        string hour_s_final = to_string(hour_i_final);
        if (hour_s_final.length() < 2) ans += '0' + hour_s_final + ':' + minute_s + " PM";
        else ans += hour_s_final + ':' + minute_s + " PM";
    }

    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    
    int t; cin >> t;

    while (t--) solve();
    
    return 0;
}