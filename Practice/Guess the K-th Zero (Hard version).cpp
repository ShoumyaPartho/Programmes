// Solved by: Shoumya

#include<iostream>
#include<ctime>
#include<vector>
#include<set>
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
    int n, t, k, low, mid, high, sum; cin >> n >> t;
    vector<int> ara(n + 1, -1);
    set<int>st;

    while (t--) {

        cin >> k;
        low = 1, high = n;

        while (low <= high) {

            if (low == high) {
                cout << "! " << low << endl;

                for (auto it = st.find(low); it != st.end(); it++)
                    ara[*it]++;

                break;
            }

            mid = (low + high) / 2;

            if (st.count(mid))
                sum = ara[mid];

            else {
                cout << "? " << 1 << " " << mid << endl;
                cin >> sum;
                st.insert(mid);
                ara[mid] = sum;
            }

            if ((mid - sum) >= k)
                high = mid;

            else
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