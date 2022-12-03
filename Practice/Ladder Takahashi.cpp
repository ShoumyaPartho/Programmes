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

void dfs(int cur, vector<vector<int> > &ls, vector<bool> &vis, vector<int> &revMp, int &ans) {
	vis[cur] = true;
	ans = max(ans, revMp[cur]);

	for (auto i : ls[cur]) {
		if (not vis[i])
			dfs(i, ls, vis, revMp, ans);
	}
}

void solve() {
	int n, x, y, coords = 0, ans = 0; cin >> n;
	map<int, int> mp;
	vector < pair<int, int> > cons(n + 1, {0, 0});

	for (int i = 1; i <= n; i++) {
		cin >> x >> y;
		mp[x]; mp[y];
		cons[i] = {x, y};
	}

	for (auto &it : mp)
		it.second = ++coords;

	vector<vector<int> > ls(coords + 1);
	vector<int> revMp(coords + 1);
	vector<bool> vis(coords + 1, false);

	for (auto &it : mp)
		revMp[it.second] = it.first;

	for (int i = 1; i <= n; i++) {
		ls[mp[cons[i].first]].push_back(mp[cons[i].second]);
		ls[mp[cons[i].second]].push_back(mp[cons[i].first]);
	}

	if (revMp[1] != 1) {
		cout << 1 << endl;
		return;
	}

	dfs(1, ls, vis, revMp, ans);

	cout << ans << endl;
}

int main() {
	fastIO();

	solve();

	return 0;
}