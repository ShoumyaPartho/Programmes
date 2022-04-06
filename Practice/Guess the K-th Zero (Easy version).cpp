// Solved by: Shoumya

#include<iostream>
#include<ctime>
#include<vector>
#include<algorithm>
using namespace std;

// #define endl "\n"
#define ll long long int

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); // cout.tie(0);

// #ifndef ONLINE_JUDGE
//  freopen("input.txt", "r", stdin);
//  freopen("output.txt", "w", stdout);
// #endif
}

void solve() {
    int n, t, k, low, mid, high; cin >> n >> t >> k;

    low = 1, high = n;

    while (true) {

        if (low == high) {
            cout << "! " << low << endl;
            break;
        }

        mid = (low + high) / 2;

        cout << "? " << low << " " << mid << endl;

        int sum;
        cin >> sum;

        if (((mid - low + 1) - sum) >= k)
            high = mid;

        else {
            k = k - (mid - low + 1) + sum;
            low = mid + 1;
        }
    }
}

int main() {
    fastIO();
    // clock_t start = clock();
    // Write code here...

    solve();

// #ifndef ONLINE_JUDGE
//  clock_t stop = clock(); cout.precision(10);
//  cout << "\n\nTime taken: " << (double)(stop - start) / CLOCKS_PER_SEC * 1000 << " seconds" << endl;
// #endif

    return 0;
}