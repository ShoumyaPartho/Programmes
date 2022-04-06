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

bool isPrime(ll n) {
    if (n == 2ll)
        return true;

    if (n % 2ll == 0 or n == 1)
        return false;

    for (ll i = 3; i * i <= n; i += 2) {
        if (not (n % i))
            return false;
    }

    return true;
}

void solve() {
    int n, flag;

    while (cin >> n, n) {
        flag = 1;

        for (ll i = 2; i <= (n >> 1); i++) {
            if (isPrime(i) and isPrime(n - i)) {
                cout << n << " = " << i << " + " << n - i << endl;
                flag = 0;
                break;
            }
        }

        if (flag)
            cout << "Goldbach's conjecture is wrong." << endl;
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










// #include<stdio.h>
// #include<iostream>
// using namespace std;

// bool isprime(int n) {
//     for (int i = 2; i * i <= n; i++) {
//         if (n % i == 0) return false;
//     }
//     return true;
// }

// int main() {
//     int n;
//     bool check;
//     while (scanf("%d", &n) && n != 0) {
//         check = false;
//         for (int i = 2; i <= n / 2; i++) {
//             if (isprime(i) && isprime(n - i)) {
//                 printf("%d = %d + %d\n", n, i, n - i);
//                 check = true;
//                 break;
//             }
//         }
//         if (!check) printf("Goldbach's conjecture is wrong.\n");
//     }
//     return 0;
// }
