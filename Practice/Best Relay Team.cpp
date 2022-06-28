// Solved by: Shoumya

#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long int

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
}

class runners {
public:
	string name;
	double a, b;
};

void solve() {
	int n; double maxi = 1e9; cin >> n;
	vector<runners> rnrs(n);
	vector<int> ans;

	for (int i = 0; i < n; i++)
		cin >> rnrs[i].name >> rnrs[i].a >> rnrs[i].b;

	for (int i = 0; i < n; i++) {
		double temp;
		vector<pair<double, int> > tempRnrs;

		for (int j = 0; j < n; j++) {
			if (i == j)
				continue;
			tempRnrs.push_back({rnrs[j].b, j});
		}
		sort(tempRnrs.begin(), tempRnrs.end());

		temp = rnrs[i].a + tempRnrs[0].first + tempRnrs[1].first + tempRnrs[2].first;
		if (temp < maxi) {
			maxi = temp;
			ans.clear();
			ans = {i, tempRnrs[0].second, tempRnrs[1].second, tempRnrs[2].second};
		}
	}

	cout << maxi << endl;

	for (auto x : ans)
		cout << rnrs[x].name << endl;
}

int main() {
	fastIO();

	solve();

	return 0;
}