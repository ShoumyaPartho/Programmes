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

vector<bool> nums(110, true);
vector<int> primes;

void generatePrimes() {
    primes.push_back(2);

    for (int i = 3; i < 105; i += 2) {
        if (nums[i]) {
            primes.push_back(i);

            for (int j = i * i; j < 105; j += i + i)
                nums[j] = false;
        }
    }
}

void solve() {
    generatePrimes();

    int t, tc, n, cnt, tempNum; cin >> t;

    for (tc = 1; tc <= t; tc++) {
        cin >> n;
        vector<pair<int, int> > factors;
        cout << "Case " << tc << ": " << n << " = ";

        for (int i = 0; i < primes.size() and primes[i] <= n; i++) {
            tempNum = primes[i], cnt = 0;

            while (tempNum <= n) {
                cnt += (n / tempNum);
                tempNum *= primes[i];
            }

            if (cnt)
                factors.push_back({primes[i], cnt});
        }

        for (int i = 0; i < (int)factors.size(); i++) {
            cout << factors[i].first << " (" << factors[i].second << ")";

            if (i == (int)factors.size() - 1)
                cout << endl;

            else
                cout << " * ";
        }
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

// vector<int>v, facors;
// bool check[110];
// int freq[110];

// void primelist() {
//     v.push_back(2);

//     for (int i = 3; i <= 110; i += 2) {
//         if (!check[i]) {
//             v.push_back(i);
//             for (int j = i * i; j <= 110; j += i + i) check[j] = true;
//         }
//     }
// }

// void fact(int n) {

//     for (int i = 0; i < v.size() && v[i] <= n; i++) {
//         int temp = n;
//         while (temp) {
//             freq[v[i]] += (temp / v[i]);
//             temp /= v[i];
//         }
//     }
// }

// int main() {
//     primelist();

//     int tc, t, n;
//     cin >> t;

//     for (tc = 1; tc <= t; tc++) {
//         cin >> n;
//         cout << "Case " << tc << ": " << n << " = ";
//         fact(n);
//         for (int i = 0; i < v.size(); i++) {
//             if (freq[v[i]]) cout << v[i] << " (" << freq[v[i]] << ")";
//             if (freq[v[i + 1]]) cout << " * ";
//             else {
//                 cout << endl;
//                 break;
//             }
//         }
//         for (int i = 0; i <= 110; i++) freq[i] = 0;
//     }
//     return 0;
// }
