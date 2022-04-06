// Solved by: Shoumya

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

    int t; cin >> t;

    while (t--) {

        int a, b, k;
        cin >> a >> b >> k;

        if (a > b)
            swap(a, b);

        if (k == 1) {
            if (b % a == 0) {

                if (a == b)
                    cout << "NO" << endl;

                else
                    cout << "YES" << endl;
            }

            else
                cout << "NO" << endl;
        }

        else {
            int Max = 0;

            for (int i = 2; i * i <= a; i++) {
                while (a % i == 0) {

                    Max++;
                    a /= i;
                }
            }

            if (a != 1)
                Max++;

            for (int i = 2; i * i <= b; i++) {
                while (b % i == 0) {

                    Max++;
                    b /= i;
                }
            }

            if (b != 1)
                Max++;

            if (k <= Max)
                cout << "YES" << endl;

            else
                cout << "NO" << endl;
        }
    }
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