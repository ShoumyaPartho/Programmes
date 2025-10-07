// Solved by: Shoumya

#include<bits/stdc++.h>
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
	int n, x, p1, p2; cin >> n;
	vector<int > nums(n + 1), pos(n + 1);

	for (int i = 1; i <= n; i++) {
		cin >> nums[i];
		pos[nums[i]] = i;
	}

	vector<pair<int, int> > ans;

	for (int i = 1; i <= n; i++) {
		if (pos[i] != i) {
			p1 = i;
			p2 = pos[i];
			ans.push_back({p1, p2});

			swap(nums[p1], nums[p2]);
			swap(pos[nums[p1]], pos[nums[p2]]);
		}
	}

	cout << ans.size() << endl;
	for (auto it : ans)
		cout << it.first << " " << it.second << endl;
}

int main() {
	fastIO();

	solve();

	return 0;
}