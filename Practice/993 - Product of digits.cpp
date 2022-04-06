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
    int tc, n, flag; cin >> tc;

    while (tc--) {
        cin >> n; flag = 1;
        vector<int> digits;

        if (n < 10) {
            cout << n << endl;
            continue;
        }

        for (int i = 9; i > 1; i--) {
            if (not (n % i)) {
                while (not(n % i)) {
                    n /= i;
                    digits.push_back(i);
                }
            }
        }

        if (n > 1) {
            cout << -1 << endl;
            continue;
        }

        sort(digits.begin(), digits.end());

        for (auto x : digits)
            cout << x;
        cout << endl;
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
// #include<cstdio>
// #include<algorithm>
// #include<vector>
// using namespace std;

// int main() {
//     long long int tc, n, num;
//     vector<int>v;
//     cin >> tc;

//     while (tc--) {
//         cin >> n;
//         if (n >= 0 && n <= 9) cout << n << endl;
//         else {
//             num = 9;
//             while (num > 1) {
//                 if (n % num == 0) {
//                     n = n / num;
//                     v.push_back(num);
//                 }
//                 else num--;
//             }
//             if (n >= 10) cout << "-1" << endl;
//             else if (n >= 2 && n <= 9) {
//                 v.push_back(n);
//                 sort(v.begin(), v.end());
//                 for (int i = 0; i < v.size(); i++) cout << v[i];
//                 cout << endl;
//             }
//             else if (n == 1) {
//                 sort(v.begin(), v.end());
//                 for (int i = 0; i < v.size(); i++) cout << v[i];
//                 cout << endl;
//             }
//         }
//         v.clear();
//     }
//     return 0;
// }
