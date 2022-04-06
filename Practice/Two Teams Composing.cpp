#include<iostream>
#include<ctime>
#include<map>
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

void solve() {
	int tc, n, x, maxCnt, maxDif, temp; cin >> tc;
	while (tc--) {
		cin >> n; maxCnt = maxCnt = 0;
		set<int> st;
		map<int, int> mp;
		for (int i = 0; i < n; i++) {
			cin >> x;
			mp[x]++; st.insert(x);
		}
		maxDif = st.size();
		for (auto it : mp) {
			temp = it.second;
			maxCnt = max(maxCnt, temp);
		}
		if (maxCnt == maxDif)
			cout << maxDif - 1 << endl;
		else
			cout << min(maxDif, maxCnt) << endl;
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