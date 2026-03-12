// Solved by: SHOUMYA

#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define endl '\n'
#define pb push_back


void solve() {
    int n; cin>>n;
    vector<int> ara(n+5,0);
    int curBest;
    bool isFound = false;

    for(int i=1;i<=n;i++)
        cin>>ara[i];

    for(int i=1;i<=n;i++){
        curBest = n-i+1;

        if(curBest == ara[i] or isFound){
            cout<<ara[i]<<" ";
            continue;
        }
        
        for(int j=i+1;j<=n;j++){
            if(ara[j]==curBest){
                for(int k=j;k>=i;k--)
                    cout<<ara[k]<<" ";
                i = j;
                isFound = true;
                break;
            }
        }
    }
    
    cout<<endl;
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