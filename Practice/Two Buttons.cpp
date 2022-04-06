// Solved by: Shoumya

#include<iostream>
#include<ctime>
#include<vector>
#include<algorithm>
#include<iomanip>
using namespace std;

#define endl "\n"
#define ll long long int
#define INF 1e7+5

void fastIO() {
  ios_base::sync_with_stdio(false);
  cin.tie(0), cout.tie(0);

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
}

int dfs(int n, int m, vector<int> &visited, vector<int> &dp) {
  if (n == m)
    return 0;

  if (dp[n] != -1)
    return dp[n];

  if (not visited[n]) {

    visited[n] = 1;
    int &ret = dp[n], ret1 = INF, ret2 = INF;

    if (n > 1)
      ret1 = 1 + dfs(n - 1, m, visited, dp);

    if (n < m)
      ret2 = 1 + dfs(n * 2, m, visited, dp);

    ret = min(ret1, ret2);

    return ret;
  }

  else
    return INF;
}

void solve() {
  int n, m; cin >> n >> m;

  vector<int> visited(1e5 + 10, 0), dp(1e5 + 10, -1);

  // dfs(n, m, visited, dp);

  cout << dfs(n, m, visited, dp) << endl;

  // cout << dp[n] << endl;

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


















// #include<iostream>
// using namespace std;

// int main() {
//   int n, m, temp, click1 = 0, click2 = 0;
//   cin >> n >> m;

//   if (n == m) cout << 0 << endl;
//   else if (n > m) cout << n - m << endl;
//   else {
//     temp = m;
//     //if(n>1) click1=0;
//     while (1) {
//       //if(n<2) break;
//       if (temp > n) {
//         if (temp % 2) {
//           temp++;
//           click1++;
//         }
//         temp /= 2;
//         click1++;
//       }
//       else if (temp == n) break;
//       else if (temp < n) {
//         click1 += (n - temp);
//         break;
//       }
//     }
//     // temp=n;
//     // while(1){
//     //   if(temp<m){
//     //     temp*=2;
//     //     click2++;
//     //   }
//     //   else if(temp==m) break;
//     //   else if(temp>m){
//     //     click2+=(temp-m);
//     //     break;
//     //   }
//     // }
//     // cout<<click1<<" "<<click2<<endl;
//     // if(click1==-1) cout<<click2<<endl;
//     // else
//     // click1<click2?cout<<click1<<endl:cout<<click2<<endl;

//     cout << click1 << endl;
//   }
//   return 0;
// }
