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

int check(string &s1, string &s2) {
	int dif = 0, m = s1.size();

	for (int i = 0; i < m; i++) {
		if (s1[i] != s2[i])
			dif++;
	}

	return dif;
}

void dfs(int &n, int i, vector<vector<int> > &lst, vector<bool> &vis, int cnt, int &flag) {
	if (cnt == (n - 1)) {
		flag = 1;
		return;
	}

	vis[i] = true;

	for (auto j : lst[i]) {
		if (not vis[j]) {
			dfs(n, j, lst, vis, cnt + 1, flag);

			if (flag)
				return;
		}
	}

	vis[i] = false;
}

void solve() {
	int n, m, flag = 0; cin >> n >> m;
	string s;
	vector<string> strs;
	vector<vector<int> > lst(n);
	vector<bool> vis(n, false);

	for (int i = 0; i < n; i++) {
		cin >> s;
		strs.push_back(s);
	}

	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (check(strs[i], strs[j]) == 1) {
				lst[i].push_back(j);
				lst[j].push_back(i);
			}
		}
	}

	for (int i = 0; i < n; i++) {
		dfs(n, i, lst, vis, 0, flag);

		if (flag)
			break;
	}

	cout << (flag ? "Yes" : "No") << endl;
}

int main() {
	fastIO();

	solve();

	return 0;
}