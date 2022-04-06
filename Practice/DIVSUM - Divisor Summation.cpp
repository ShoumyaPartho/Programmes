// Solved by: Shoumya

#include<iostream>
#include<ctime>
#include<vector>
#include<algorithm>
#include<iomanip>
using namespace std;

#define endl "\n"
#define ll long long int
const ll MAX = 5e5 + 5;

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

vector<bool> nums(MAX, true);
vector<int> primes;

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

ll sod(ll n) {
    ll ans = 1, tempNum, tempSum;

    for (int i = 0; i < primes.size() and (primes[i]*primes[i] <= n); i++) {
        if (not(n % primes[i])) {
            tempNum = tempSum = 1;

            while (not(n % primes[i])) {
                n /= primes[i];
                tempNum *= primes[i];
                tempSum += tempNum;
            }
            ans *= tempSum;
        }
    }

    if (n > 1)
        ans *= (n + 1);

    return ans;
}

void solve() {
    generatePrimes();
    ll tc, n; cin >> tc;

    while (tc--) {
        cin >> n;

        cout << sod(n) - n << endl;
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
// #include<cmath>
// using namespace std;

// int main() {
//     int tc, n, sum, i, sqrtn;
//     cin >> tc;

//     while (tc--) {
//         sum = 1;
//         cin >> n;
//         if (n == 1) {
//             cout << "0" << endl;
//             continue;
//         }
//         sqrtn = sqrt(n);
//         for (i = 2; i < sqrtn; i++) {
//             if (n % i == 0) {
//                 sum += i;
//                 if ((n / i) != i)sum += (n / i);
//             }
//         }
//         if (n % sqrtn == 0 && sqrtn != 1) {
//             if ((sqrtn * sqrtn) == n) sum += sqrtn;
//             else {
//                 sum += sqrtn;
//                 sum += (n / sqrtn);
//             }
//         }
//         cout << sum << endl;
//     }
//     return 0;
// }
