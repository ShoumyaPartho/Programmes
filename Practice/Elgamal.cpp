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

ll bigMod(ll a, ll p, ll m) {
    if (p == 0)
        return 1;

    if (p == 1)
        return a % m;

    ll temp = bigMod(a, p / 2, m);
    temp = ((temp % m) * (temp % m)) % m;

    if (p % 2)
        temp = ((temp % m) * (a % m)) % m;

    return temp;
}

ll inverseMod(ll a, ll b) {
    ll res = a % b;

    for (int i = 1; i < b; i++) {
        ll t = ((a % b) * (i % b)) % b;

        if (t == 1)
            return i;
    }
}

void elCryp() {
    ll p = 101, alpha = 11, a = 20, x = 15, k = 31, beta = bigMod(alpha, a, p), y1, y2, t1, t2, res;

    // Encryption
    y1 = bigMod(alpha, k, p);
    t1 = bigMod(beta, k, p);
    y2 = ((x % p) * (t1 % p)) % p;

    // Decryption
    t1 = bigMod(y1, a, p);
    t1 = inverseMod(t1, p);
    res = ((y2 % p) * (t1 % p)) % p;

    cout << "Message : " << x << " , Result = " << res << endl;
}

void elSign() {
    ll p = 101, alpha = 11, a = 20, x = 15, k = 31, beta = bigMod(alpha, a, p), y1, y2, t1, t2, res;
    // ll p = 13, alpha = 2, a = 3, x = 11, k = 5, beta = bigMod(alpha, a, p), y1, y2, t1, t2, res;
    y1 = bigMod(alpha, k, p); cout << "y1 = " << y1 << " beta = " << beta << endl;
    t1 = ((a % (p - 1)) * (y1 % (p - 1))) % (p - 1);
    t1 = ((((x % (p - 1)) - (t1 % (p - 1))) % (p - 1)) + (p - 1)) % (p - 1);
    t2 = inverseMod(k, p - 1); // cout << t2 << endl;
    y2 = ((t1 % (p - 1)) * (t2 % (p - 1))) % (p - 1); cout << "y2 = " << y2 << endl;

    t1 = bigMod(y1, y2, p);
    t2 = bigMod(beta, y1, p);
    res = ((t1 % p) * (t2 % p)) % p;
    t1 = bigMod(alpha, x, p);

    cout << t1 << " " << res << endl;
}

void solve() {
    elCryp();
    // elSign();
}

int main() {
    fastIO();

    solve();

    return 0;
}