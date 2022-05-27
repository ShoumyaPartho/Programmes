// Solved by: Shoumya

#include<iostream>
#include<ctime>
#include<vector>
#include<map>
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

bool check(int *ara, int n, int val) {
    map<int, int> mp;

    for (int i = 1; i <= n; i++)
        mp[ara[i]]++;

    for (int i = 1; i <= val; i++) {
        mp[ara[i]]--;

        if (mp[ara[i]] == 0)
            mp.erase(ara[i]);
    }

    if (mp.size() == n - val)
        return true;

    for (int i = val + 1; i <= n; i++) {
        mp[ara[i - val]]++;
        mp[ara[i]]--;

        if (mp[ara[i]] == 0)
            mp.erase(ara[i]);

        if (mp.size() == n - val)
            return true;
    }
    return false;
}

void solve() {
    int n, low = 0, high, mid, ans; cin >> n;

    int ara[n + 1] = {0}; high = n;

    for (int i = 1; i <= n; i++)
        cin >> ara[i];

    while (low <= high) {
        mid = (low + high) >> 1;

        if (check(ara, n, mid)) {
            ans = mid;
            high = mid - 1;
        }

        else
            low = mid + 1;
    }

    cout << ans << endl;
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