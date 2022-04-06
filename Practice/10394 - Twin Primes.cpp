// Solved by: Shoumya

#include<iostream>
#include<ctime>
#include<vector>
#include<algorithm>
#include<iomanip>
using namespace std;

#define endl "\n"
#define ll long long int
const ll MAX = 2e7 + 5;

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

vector<bool> nums(MAX, true);
vector<pair<int, int> > twinPrime;

void generatePrimeList() {
    twinPrime.push_back({0, 0});
    for (int i = 2 * 2; i < MAX; i += 2)
        nums[i] = false;

    for (ll i = 3; i < MAX; i += 2) {
        if (nums[i]) {
            for (ll j = i * i; j < MAX; j += i + i)
                nums[j] = false;
        }
    }

    for (int i = 3; i < MAX; i += 2) {
        if (nums[i] and (i + 2 < MAX) and nums[i + 2])
            twinPrime.push_back({i, i + 2});
    }
}

void solve() {
    generatePrimeList();
    int n;

    while (cin >> n)
        cout << "(" << twinPrime[n].first << ", " << twinPrime[n].second << ")" << endl;
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
// #include<vector>
// #include<cstring>
// #include<cmath>
// using namespace std;

// #define MAX 20000004

// vector<int>v;
// vector<pair<int, int> > vp;
// bool check[MAX];
// void primelist() {
//     int lim = sqrt(MAX * 1.0) + 2;
//     for (int i = 3; i <= MAX; i += 2) {
//         if (!check[i]) {
//             v.push_back(i);
//             if (i <= lim) {
//                 for (int j = i * i; j <= MAX; j += i) check[j] = true;
//             }
//         }
//     }
//     for (int i = 0; i < v.size(); i++) {
//         if (v[i + 1] - v[i] == 2) vp.push_back({v[i], v[i + 1]});
//     }
// }

// int main() {
//     primelist();
//     int n;
//     while (scanf("%d", &n) != EOF) {
//         printf("(%d, %d)\n", vp[n - 1].first, vp[n - 1].second);
//     }
// }
