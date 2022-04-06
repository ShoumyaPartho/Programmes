// Solved by: Shoumya

#include<iostream>
#include<ctime>
#include<vector>
#include<algorithm>
#include<iomanip>
using namespace std;

#define endl "\n"
#define ll long long int
const ll INF = 1e18;

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

class EDGE {
public:
	ll a, b, c;
};

void solve() {
	ll n, m, a, b, c, ans = 0, cnt; cin >> n >> m;
	vector<EDGE> edges(m + 1);
	vector<vector<ll> > dis(n + 1, vector<ll>(n + 1, INF));

	for (int i = 1; i <= m; i++) {
		cin >> edges[i].a >> edges[i].b >> edges[i].c;
		dis[edges[i].a][edges[i].b] = dis[edges[i].b][edges[i].a] = edges[i].c;
	}

	for (int k = 1; k <= n; k++) {
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++)
				dis[i][j] = min(dis[i][j], dis[i][k] + dis[k][j]);
		}
	}

	for (int i = 1; i <= m; i++) {
		a = edges[i].a; b = edges[i].b; c = edges[i].c;
		cnt = 0;

		for (int j = 1; j <= n; j++) {
			if (dis[a][b] >= (dis[a][j] + dis[j][b]))
				cnt = 1;
		}

		ans += cnt;
	}

	cout << ans << endl;
}

int main() {
	fastIO();
	clock_t start = clock();
	// Write code here...

	solve();

#ifndef ONLINE_JUDGE
	clock_t stop = clock(); cout.precision(3);
	cout << fixed << "\n\nTime taken: " << (double)(stop - start) / CLOCKS_PER_SEC * 1000 << " seconds" << endl;
#endif

	return 0;
}