// Solved by: Shoumya

#include<iostream>
#include<ctime>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;

#define endl "\n"
#define ll long long int
#define pii pair<int,int>

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

struct CMP
{
	bool operator()(const pii &a, const pii &b) const {
		return a.second == b.second ? a.first < b.first : a.second > b.second;
	}
};

void solve() {
	int tc, d, n, ptr, ans; cin >> tc;

	while (tc--) {
		cin >> n >> d;

		vector<pii> ara(n + 1);

		for (int i = 1; i <= n; i++)
			cin >> ara[i].first;

		for (int i = 1; i <= n; i++)
			cin >> ara[i].second;

		sort(ara.begin() + 1, ara.end());
		ans = 0, ptr = 1;

		multiset<pii, CMP> mset;

		for (int i = n; i; i--) {

			while (ptr < i and (ara[ptr].first + ara[i].first <= d)) {
				mset.insert(ara[ptr]);
				ptr++;
			}

			auto it = mset.find(ara[i]);

			if (i < ptr and it != mset.end())
				mset.erase(it);

			if (ara[i].first <= d)
				ans = max(ans, ara[i].second + (mset.empty() ? 0 : (*mset.begin()).second));
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