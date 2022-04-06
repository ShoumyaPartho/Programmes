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
    ll n, k, num = 1, lcm; cin >> n >> k;

    for (int i = 1; i <= k; i++)
        num *= 10;

    lcm = n / __gcd(n, num) * num;

    cout << lcm << endl;
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
// #include<algorithm>
// using namespace std;

// int main() {
//     long long int n, k, x, temp = 1, gcd;
//     cin >> n >> k;

//     for (int i = 1; i <= k; i++) temp *= 10;
//     gcd = __gcd(n, temp);
//     x = (n / gcd) * temp;

//     cout << x << endl;

//     return 0;
// }
