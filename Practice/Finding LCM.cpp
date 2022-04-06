// Solved by: Shoumya

#include<iostream>
#include<ctime>
#include<vector>
#include<algorithm>
#include<iomanip>
using namespace std;

#define endl "\n"
#define ll long long int
const int MAX = 1e6 + 5;

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
                nums[i] = false;
        }
    }
}

void solve() {
    generatePrimes();

    ll tc, t, a, b, l, cntA, cntB, cntL, ans; cin >> t;

    for (tc = 1; tc <= t; tc++) {
        cout << "Case " << tc << ": ";
        cin >> a >> b >> l; ans = 1;

        if (l % a or l % b) {
            cout << "impossible" << endl;
            continue;
        }

        for (int i = 0; i < primes.size() and (l > 1 or a > 1 or b > 1); i++) {
            cntA = cntB = cntL = 0;

            while (not(a % primes[i]))
                a /= primes[i], cntA++;

            while (not(b % primes[i]))
                b /= primes[i], cntB++;

            while (not(l % primes[i]))
                l /= primes[i], cntL++;

            if (cntL > max(cntA, cntB)) {
                for (int j = 1; j <= cntL; j++)
                    ans *= primes[i];
            }
        }

        cout << ans << endl;
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
//     long long int tc, t, a, b, c, l, cnt1, cnt2, cnt3, res;
//     cin >> t;

//     for (tc = 1; tc <= t; tc++) {
//         cin >> a >> b >> l;

//         cout << "Case " << tc << ": ";

//         if (l % a != 0 || l % b != 0) cout << "impossible" << endl;
//         else {
//             res = 1;
//             for (int i = 0; i < prime.size() && (l > 1 || a > 1 || b > 1); i++) {
//                 cnt1 = cnt2 = cnt3 = 0;
//                 while (a % prime[i] == 0) {
//                     a /= prime[i];
//                     cnt1++;
//                 }
//                 while (b % prime[i] == 0) {
//                     b /= prime[i];
//                     cnt2++;
//                 }
//                 while (l % prime[i] == 0) {
//                     l /= prime[i];
//                     cnt3++;
//                 }
//                 if (cnt3 > max(cnt1, cnt2)) {
//                     for (int j = 0; j < cnt3; j++) res *= prime[i];
//                 }
//             }
//             // if (l > 1) res *= l;
//             cout << res << endl;
//         }
//     }
//     return 0;
// }
