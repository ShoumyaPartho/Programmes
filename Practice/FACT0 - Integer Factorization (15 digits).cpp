// Solved by: Shoumya

#include<iostream>
#include<ctime>
#include<vector>
#include<algorithm>
#include<iomanip>
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
    ll n, cnt;

    while (cin >> n, n) {

        if (not (n % 2)) {
            cnt = 0;
            while (not (n % 2)) {
                cnt++;
                n /= 2;
            }
            cout << 2 << "^" << cnt;

            cout << (n == 1 ? endl : " ");
        }

        for (ll i = 3; i * i <= n; i += 2) {
            if (not (n % i)) {
                cnt = 0;

                while (not(n % i)) {
                    n /= i;
                    cnt++;
                }
                cout << i << "^" << cnt;

                cout << (n == 1 ? endl : " ");
            }
        }

        if (n > 1)
            cout << n << "^" << 1 << endl;
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
// using namespace std;

// int main() {
//     long long int n, cnt, p;

//     while (1) {
//         cin >> n;
//         if (n == 0) break;

//         p = 2, cnt = 0;
//         while (n % p == 0) {
//             cnt++;
//             n /= p;
//         }
//         if (cnt) cout << p << "^" << cnt << " ";

//         for (p = 3; p * p <= n; p += 2) {
//             cnt = 0;
//             while (n % p == 0) {
//                 cnt++;
//                 n /= p;
//             }
//             if (cnt) cout << p << "^" << cnt << " ";
//         }
//         if (n > 1) cout << n << "^1" << " ";
//         cout << endl;
//     }
//     return 0;
// }
