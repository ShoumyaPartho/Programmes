// Solved by: SHOUMYA

#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define endl '\n'
#define pb push_back


void solve() {
    string s;
    int len,cnt = 0;
    cin>>s; len = s.size();

    if(s[0]=='u')
        cnt++;
    if(s[len-1]=='u')
        cnt++;
    s[0]=s[len-1]='s';
    
    for(int i=1;i<len;i++){
        if(s[i]==s[i-1] and s[i]=='u'){
            cnt++;
            s[i]='s';
        }
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