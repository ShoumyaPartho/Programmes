// Solved by: Shoumya

#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long int

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

void solve() {
    string s, p, temp; cin >> s >> p;

    if (s == p) {
        cout << "Yes" << endl;
        return;
    }

    if (s.size() - 1 == p.size()) {
        int flag = 1;

        for (int i = 0; i < p.size(); i++) {
            if (p[i] != s[i + 1]) {
                flag = 0;
                break;
            }
        }

        if (flag and s[0] >= '0' and s[0] <= '9') {
            cout << "Yes" << endl;
            return;
        }

        flag = 1;

        for (int i = 0; i < p.size(); i++) {
            if (p[i] != s[i]) {
                flag = 0;
                break;
            }
        }

        if (flag and s[s.size() - 1] >= '0' and s[s.size() - 1] <= '9') {
            cout << "Yes" << endl;
            return;
        }
    }

    temp = p;

    for (int i = 0; i < temp.size(); i++) {
        if (s[i] >= 'a' and s[i] <= 'z')
            s[i] = ('A' + s[i] - 'a');

        else if (s[i] >= 'A' and s[i] <= 'Z')
            s[i] = 'a' + s[i] - 'A';
    }

    if (temp == s) {
        cout << "Yes" << endl;
        return;
    }

    cout << "No" << endl;
}

int main() {
    fastIO();

    // solve();

    int tc, t = 1; // cin>>t;

    for (tc = 1; tc <= t; tc++) {
        // cout<<"Case "<<tc<<": ";
        solve();
    }

    return 0;
}