// Solved by: SHOUMYA

#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define endl '\n'


void solve() {
    int n, m, prev = 0, cur;
    bool isStrictlyIncreasing = true;

    cin>>n>>m;

    for(int i=0; i<m; i++) {
        cin>>cur;
        if(cur <= prev) isStrictlyIncreasing = false;
        prev = cur;
    }

    if(not isStrictlyIncreasing) 
        cout<<1<<endl;
    else 
        cout<<n-cur+1<<endl;
}

int main() {
    fast_io;
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int t; // t = 1;
    cin >> t;
    for (int tc = 1; tc <= t; tc++) {
        // cout << "Case #" << tc << ": ";
        solve();
    }
    return 0;
}