// Solved by: Shoumya

#include<iostream>
#include<ctime>
#include<vector>
#include<algorithm>
#include<iomanip>
using namespace std;

#define endl "\n"
#define ll long long int
const ll MAX = 1e5 + 5;

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

vector<bool> nums(MAX, true);
vector<ll> primes;

void generatePrimes() {
    primes.push_back(2);

    for (ll i = 3; i < MAX; i++) {
        if (nums[i]) {
            primes.push_back(i);

            for (ll j = i * i; j < MAX; j += i + i)
                nums[j] = false;
        }
    }
}

ll NOD(ll n) {
    ll ans = 1, cnt;

    for (int i = 0; i < primes[i] and (primes[i]*primes[i] <= n); i++) {
        if (not (n % primes[i])) {
            cnt = 0;

            while (not (n % primes[i])) {
                n /= primes[i];
                cnt++;
            }
            ans *= (cnt + 1);
        }
    }

    if (n > 1)
        ans *= 2;

    return ans;
}

void solve() {
    generatePrimes();

    ll a, b, n, cnt = 0; cin >> a >> b >> n;
    if (a > b)
        swap(a, b);

    for (ll x = a; x <= b; x++) {
        if (NOD(x) == n)
            cnt++;
    }

    cout << cnt << endl;
}

int main() {
    fastIO();
    clock_t start = clock();
    // Write code here...

    solve();

#ifndef ONLINE_JUDGE
    clock_t stop = clock(); cout.precision(3);
    cout << fixed << "\n\nTime taken: " << (double)(stop - start) / CLOCKS_PER_SEC * 1000 << " seconds" << endl;
#endif

    return 0;
}









// #include<iostream>
// using namespace std;

// int main() {
//     int a, b, n, div = 0, cnt = 0, res = 1, p, x;
//     cin >> a >> b >> n;
//     if (a > b) swap(a, b);

//     for (int t = a; t <= b; t++) {
//         x = t, div = 0, res = 1;
//         if (x == 1) {
//             div++;
//             if (res == n) {
//                 cnt++;
//                 continue;
//             }
//             else continue;
//         }
//         p = 2;
//         while (x % p == 0) {
//             x /= p;
//             div++;
//         }
//         if (div) res *= (div + 1);

//         for (p = 3; p * p <= x; p++) {
//             div = 0;
//             while (x % p == 0) {
//                 x /= p;
//                 div++;
//             }
//             if (div) res *= (div + 1);
//         }
//         if (x > 1) res *= 2;
//         if (res == n) cnt++;
//     }
//     cout << cnt << endl;

//     return 0;
// }
