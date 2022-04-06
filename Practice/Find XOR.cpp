// Actual Solution + Implementation

// //#define _GLIBCXX_DEBUG
// //#pragma GCC optimize "trapv"
// #include <bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>

// using namespace std;
// using namespace __gnu_pbds;

// // #pragma GCC target ("avx2")
// // #pragma GCC optimization ("O3")
// // #pragma GCC optimization ("unroll-loops")
// // #pragma optimization_level 3
// // #pragma GCC optimize("Ofast,no-stack-protector,unroll-loops,fast-math,O3")
// // #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")


// #define pb push_back
// #define f first
// #define s second
// #define min3(a, b, c) min(min(a, b), c)
// #define max3(a, b, c) max(max(a, b), c)
// #define all(v) v.begin(), v.end()

// typedef long long ll;
// typedef double ld;
// typedef long double lld;
// typedef unsigned long long ull;
// typedef pair<int, int> pii;
// typedef pair<ll, ll> pll;
// typedef vector<int> vi;
// typedef vector<vi> vvi;
// typedef vector<ll> vl;
// typedef vector<vl> vvl;
// typedef vector<pii> vpi;
// typedef vector<pll> vpl;

// template <class T> using ordered_set = tree <T, null_type, less <T>, rb_tree_tag, tree_order_statistics_node_update>;

// const int INF = 1e9;
// //const ll INF = 1e18;
// const ll mod = 1000000007;
// // const ll mod = 998244353;

// int main(){
// 	int tc = 1;
// 	cin >> tc;
// 	for (int t = 0; t < tc; t++){
// 		int n;
// 		cin >> n;
// 		ll ans1 = 0;
// 		ll sum;
// 		cout << 1 << " " << 1048576 << endl;
// 		cin >> sum;
// 		sum -= n*1048576;
// 		if(sum%2) ans1 = 1;
// 		for(int i = 1; i <= 19; i++){
// 			cout << 1 << " " << (1 << i) << endl;
// 			ll sum1;
// 			cin >> sum1;
// 			//assert(sum1 != -1);
// 			ll diff = sum - sum1;
// 			diff = diff/(1LL << i);
// 			ll on = (n + diff)/2;
// 			if(on%2 == 1) ans1 |= (1 << i);
// 		}
// 		cout << 2 << " " << ans1 << endl;
// 		int j;
// 		cin >> j;
// 		assert(j == 1);
// 	}

// 	return 0;
// }


// --------------------------------------------------------------------------------------
// --------------------------------------------------------------------------------------


// Not Accepted but Logically Equivalent Implementation

#include <bits/stdc++.h>
#include <ctime>
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

int solve() {
	ll tc, n, sum, tempSum, x, diff, on, ans; cin >> tc;

	while (tc--) {
		cin >> n; cout << 1 << " " << (1 << 20) << endl; cin >> x; ans = 0ll;
		sum = x - (n * (1ll << 20));
		if ((sum % 2ll) == 1ll) ans = 1ll;// (==1) had to be mentioned otherwise caused error

		for (int i = 1; i <= 19; i++) {
			cout << 1 << " " << (1 << i) << endl;
			cin >> tempSum;
			diff = (sum - tempSum);
			diff = (diff) / (1ll << i);
			on = (n + diff) / 2ll;
			if ((on % 2ll) == 1ll) ans |= (1ll << i);
		}
		cout << 2 << " " << ans << endl;
		cin >> x;
		if (x == -1) return -1;
		// assert(x == 1);
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