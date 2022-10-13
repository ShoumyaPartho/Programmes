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

struct Subsets {
    int n = 0;
    ll p = 0;
};

void getPrimeFactors(int a, const vector<int> & primes, vector<int> &f) {
    for (auto p : primes) {
        if (p > a) break;
        if (a % p == 0) {
            f.push_back(p);
            do {
                a /= p;
            } while (a % p == 0);
        }
    }
    if (a > 1) f.push_back(a);
}

void getPrimes(vector<int> &primes) {
    primes.push_back(2);

    for (int i = 3; i * i <=  1e5; ++i) {
        bool isPrime = true;
        for (auto p : primes) {
            if (i % p == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            primes.push_back(i);
        }
    }
}

void solve() {
    int N, Q; cin >> N >> Q;
    vector<int> A(N), B(Q), primes;
    getPrimes(primes);

    for (auto &i : A)
        cin >> i;

    for (auto &i : B)
        cin >> i;

    map<ll, ll> occOfSubsets, temp;

    for (int i = 0; i < N; i++) {
        vector<int> f;
        getPrimeFactors(A[i], primes, f);

        vector<Subsets> x;
        Subsets d;
        d.n = 0; d.p = 1;
        x.push_back(d);

        for (auto p : f) {
            int k = x.size();
            for (int i = 0; i < k; ++i) {
                int nn = x[i].n + 1;
                ll pp = x[i].p * p;

                occOfSubsets[pp]++;
                d.n = nn; d.p = pp;
                x.push_back(d);
            }
        }
    }

    temp = occOfSubsets;

    for (int i = 0; i < Q; i++) {
        vector<int> f;
        getPrimeFactors(B[i], primes, f);
        ll ans = N; occOfSubsets = temp;

        vector<Subsets> x;
        Subsets d;
        d.n = 0; d.p = 1;
        x.push_back(d);

        for (auto p : f) {
            int k = x.size();
            for (int i = 0; i < k; ++i) {
                int nn = x[i].n + 1;
                ll pp = x[i].p * p;

                x.push_back({ nn, pp });

                if (nn % 2 == 1) {
                    ans -= occOfSubsets[pp];
                }

                else {
                    ans += occOfSubsets[pp];
                }
            }
        }

        cout << ans << endl;
    }
}

int main() {
    fastIO();

    // solve();

    int tc, t = 1; // cin >> t;

    for (tc = 1; tc <= t; tc++) {
        // cout<<"Case "<<tc<<": ";
        solve();
    }

    return 0;
}