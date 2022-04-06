#include<iostream>
#include<ctime>
#include<algorithm>
#include<cstdio>
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
    int n, l; double disF, disL, disM = 0.0; cin >> n >> l;
    int ara[n + 1];
    for (int i = 1; i <= n; i++) cin >> ara[i];
    sort(ara + 1, ara + n + 1);
    disF = (double) (ara[1] - 0.0), disL = (double)(l * 1.0 - ara[n]);
    for (int i = 2; i <= n; i++) {
        disM = max(disM, (double)(ara[i] - ara[i - 1]) * 1.0 / 2.0);
    }
    // cout << max(disF, max(disM, disL)) << endl;
    printf("%llf\n", max(disF, max(disM, disL)));
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