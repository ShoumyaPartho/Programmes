#include<iostream>
#include<ctime>
#include<vector>
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

void result(vector<int>& ara, int n, bool minimize) {
	set<int> st;
	for (int i = 1; i <= n; i++)
		st.insert(i);
	int lastNum = -1;
	for (int i = 0; i < n; i++) {
		if (ara[i] != -1)
			st.erase(ara[i]);
	}
	for (int i = 0; i < n; i++) {
		if (ara[i] == -1) {
			set<int>::iterator it;
			if (minimize)
				it = st.begin();
			else
				it = -- st.lower_bound(lastNum);
			//cout << "\nNum: " << *it << endl;
			ara[i] = *it;
			st.erase(it);
		}
		else
			lastNum = ara[i];
	}
}

void solve() {
	int tc, n; cin >> tc;
	while (tc--) {
		cin >> n;
		vector<int> ara(n), small(n, -1), large(n, -1);

		for (int i = 0; i < n; i++)
			cin >> ara[i];

		int lastNum = -1;

		for (int i = 0; i < n; lastNum = ara[i], i++) {
			if (ara[i] != lastNum)
				small[i] = large[i] = ara[i];
		}

		result(small, n, true);
		result(large, n, false);

		for (int i = 0; i < n; i++)
			cout << small[i] << " \n"[i == n - 1];
		for (int i = 0; i < n; i++)
			cout << large[i] << " \n"[i == n - 1];
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