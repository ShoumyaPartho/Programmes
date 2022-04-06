// Solved by: Shoumya

#include<iostream>
#include<ctime>
#include<vector>
#include<algorithm>
#include<iomanip>
using namespace std;

#define endl "\n"
#define ll long long int
const ll MAX = 1e6 + 5;

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

    for (ll i = 3; i < MAX; i += 2) {
        if (nums[i]) {
            primes.push_back(i);
            for (ll j = i * i; j < MAX; j += i + i)
                nums[j] = false;
        }
    }
}

ll NOD(ll n) {
    ll ans = 1, temp;

    for (int i = 0; i < primes.size() and (primes[i]*primes[i] <= n); i++) {
        if (not(n % primes[i])) {
            temp = 0;

            while (not(n % primes[i])) {
                n /= primes[i];
                temp++;
            }
            ans *= (temp + 1);
        }
    }

    if (n > 1)
        ans *= 2ll;

    return ans;
}

void solve() {
    generatePrimes();

    ll tc, n, t; cin >> t;

    for (tc = 1; tc <= t; tc++) {
        cin >> n;
        cout << "Case " << tc << ": " << NOD(n) - 1 << endl;
    }
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
// #include<vector>
// #include<cmath>
// using namespace std;

// vector<int> prime;
// bool check[1000010];

// void soe() {
//     prime.push_back(2);

//     for (int i = 4; i <= 1000002; i += 2)
//         check[i] = true;

//     int sqrtn = sqrt(1000010) + 1;

//     for (int i = 3; i < 1000010; i += 2) {
//         if (check[i] == false) {
//             prime.push_back(i);
//             if (i < sqrtn) {
//                 for (int j = i * i; j <= 1000010; j += i + i) check[j] = true;
//             }
//         }
//     }
// }

// int main() {
//     soe();

//     long long int tc, t, n, sqrtn, cnt, res;
//     cin >> t;

//     for (tc = 1; tc <= t; tc++) {
//         cin >> n;
//         sqrtn = sqrt(n);
//         res = 1;

//         for (int i = 0; i < prime.size() && prime[i] <= sqrtn; i++) {
//             if (n < prime[i])
//                 break;

//             if (n % prime[i] == 0) {
//                 cnt = 0;
//                 while (n % prime[i] == 0) {
//                     n /= prime[i];
//                     cnt++;
//                 }
//                 res *= (cnt + 1);

//                 sqrtn = sqrt(n);
//             }
//         }

//         if (n != 1)
//             res *= 2;
//         cout << "Case " << tc << ": " << res - 1 << endl;
//     }
//     return 0;
// }
