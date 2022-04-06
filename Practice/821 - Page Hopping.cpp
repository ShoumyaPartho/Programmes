// Solved by: Shoumya

#include<iostream>
#include<ctime>
#include<vector>
#include<unordered_set>
#include<algorithm>
#include<iomanip>
using namespace std;

#define endl "\n"
#define ll long long int
const int INF = 1e9 + 7;

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

void solve() {
	int start, end, u, v, tc = 0;

	while (cin >> start >> end, (start or end)) {
		vector<vector<int> > mat(101, vector<int> (101, INF));
		unordered_set<int> st;
		st.insert(start); st.insert(end);

		for (int i = 1; i <= 100; i++)
			mat[i][i] = 0;

		mat[start][end] = 1;

		while (cin >> u >> v, (u or v)) {
			st.insert(u); st.insert(v);
			mat[u][v] = 1;
		}

		for (int i = 1; i <= 100; i++) {
			for (int j = 1; j <= 100; j++) {
				for (int k = 1; k <= 100; k++)
					mat[j][k] = min(mat[j][k], mat[j][i] + mat[i][k]);
			}
		}

		double ans = 0;

		for (int i = 1; i <= 100; i++) {
			for (int j = 1; j <= 100; j++) {
				if (mat[i][j] != INF)
					ans += mat[i][j];
			}
		}

		ans = ans / (st.size() * (st.size() - 1));

		cout << "Case " << ++tc << ": average length between pages = " << fixed << setprecision(3) << ans << " clicks" << endl;
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