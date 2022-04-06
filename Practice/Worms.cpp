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

int bin_search(int ara[], int high, int num) {
    int low = 1, mid;

    while (low <= high) {
        mid = (low + high) / 2;
        if (ara[mid] >= num && ara[mid - 1] < num) {
            return mid;
        }
        else if (ara[mid] < num) low = mid + 1;
        else high = mid - 1;
    }
}

void solve() {
    int n, m, i, j, query;

    cin >> n;
    int pile[n + 1]; pile[0] = 0;
    for (i = 1; i <= n; i++) {
        cin >> pile[i];
        pile[i] += pile[i - 1];
    }

    cin >> m;

    for (j = 1; j <= m; j++) {
        cin >> query;
        i = bin_search(pile, n, query);
        cout << i << endl;
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
