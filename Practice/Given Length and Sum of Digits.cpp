#include<iostream>
#include<ctime>
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
    int m, s, digit, tempSum;
    cin >> m >> s;

    if (s > m * 9 or s<1 and m>1) cout << "-1 -1" << endl;

    else {
        for (int i = 1, tempSum = s; i <= m; i++) {
            digit = max(0, tempSum - ( 9 * (m - i)));
            if (i == 1 and digit == 0 and tempSum) digit = 1;
            cout << digit;
            tempSum -= digit;
        }
        cout << " ";

        for (int i = 1, tempSum = s; i <= m; i++) {
            digit = min(9, tempSum);
            cout << digit;
            tempSum -= digit;
        }
    }
    cout << endl;
}

int main() {
    fastIO();
    clock_t start = clock();
    // Write code here...

    solve();

#ifndef ONLINE_JUDGE
    clock_t stop = clock(); cout.precision(10);
    cout << "\n\nTime taken: " << (double)(stop - start) / CLOCKS_PER_SEC * 1000 << " seconds" << endl;
#endif

    return 0;
}
