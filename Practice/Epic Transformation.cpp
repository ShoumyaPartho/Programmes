#include<iostream>
#include<ctime>
#include<map>
#include<queue>
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
	int tc, n, x, ans; cin >> tc;
	while (tc--) {
		cin >> n; ans = n;
		map<int, int> mp;
		for (int i = 0; i < n; i++) {
			cin >> x;
			mp[x]++;
		}
		priority_queue<pair<int, int> > pq;

		for (auto i : mp)
			pq.push({i.second, i.first});

		while (pq.size() > 1) {
			int cnt1 = pq.top().first, x1 = pq.top().second; pq.pop();
			int cnt2 = pq.top().first, x2 = pq.top().second; pq.pop();
			cnt1--, cnt2--;
			ans -= 2;
			if (cnt1)
				pq.push({cnt1, x1});
			if (cnt2)
				pq.push({cnt2, x2});
		}
		cout << ans << endl;
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