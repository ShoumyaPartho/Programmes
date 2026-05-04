// Solved by: SHOUMYA

#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define endl '\n'
#define pb push_back

ll sum(ll n){
    ll s = 0;
    while(n){
        s += n%10;
        n /= 10;
    }
    return s;
}

void solve() {
    ll n,cnt = 0; cin>>n;
    for(ll i=n+1; i<=n+200;i++){
        if(i - sum(i) == n) cnt++;
    }
    cout<<cnt<<endl;
}

int main() {
    fast_io;
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int t;
    // t = 1;
    cin >> t;
    for (int tc = 1; tc <= t; tc++) {
        // cout << "Case #" << tc << ": ";
        solve();
    }
    return 0;
}