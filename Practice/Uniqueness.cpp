// LINKS:
//
// Discussion - https://codeforces.com/blog/entry/69357?#comment-538385
//
// O(Nlog2N)  - Using Map + Binary_Search - https://codeforces.com/contest/1208/submission/59453068
// O(NlogN)   - Using Segment Tree        - https://codeforces.com/contest/1208/submission/59492725
// O(NlogN)   - Using Unordered Map       - https://codeforces.com/contest/1208/submission/59494540

// This is as an O(N^2logN) Solution
#include<iostream>
#include<ctime>
#include<set>
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

// This is as an O(N^2logN) Solution
void solve() {
	set<int> st; int n, x, i, j, suffixIndex; cin >> n; int ara[n + 1], ans = n - 1;
	for (int i = 1; i <= n; i++)
		cin >> ara[i];

	for (i = 1; i <= n; i++) {
		bool validPrefix = true;

		for (j = 1; j < i; j++) {
			if (not st.count(ara[j]))
				st.insert(ara[j]);
			else {
				validPrefix = false;
				break;
			}
		}

		for (j = n; j >= i; j--) {
			if (not st.count(ara[j]))
				st.insert(ara[j]);
			else {
				suffixIndex = j + 1;
				break;
			}
			if (j == i) suffixIndex = j;
		}

		if (validPrefix) ans = min(ans, suffixIndex - i);
		st.clear();
	}
	cout << ans << endl;
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
