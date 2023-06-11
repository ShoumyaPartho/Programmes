// Solved by: Shoumya

#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long int
const double eps = 1e-6;

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

void solve() {
	int n, d; cin >> n >> d;
	vector<pair<int, int> > points(n + 1);
	int inf[n + 1] = {0}; inf[1] = 1;
	queue<int> q; q.push(1);

	for (int i = 1; i <= n; i++)
		cin >> points[i].first >> points[i].second;

	while (not q.empty()) {
		int i = q.front(); q.pop();
		for (int j = 1; j <= n; j++) {
			if (i != j and (not inf[j])) {
				double dis1 = points[i].first * 1.0 - points[j].first;
				dis1 *= dis1;
				double dis2 = points[i].second * 1.0 - points[j].second;
				dis2 *= dis2;
				double dis = sqrt(dis1 + dis2);

				if (d + eps > dis) {
					inf[j] = 1;
					q.push(j);
				}
			}
		}
	}

	for (int i = 1; i <= n; i++) {
		if (inf[i])
			cout << "Yes" << endl;

		else
			cout << "No" << endl;
	}
}

int main() {
	fastIO();

	solve();

	return 0;
}