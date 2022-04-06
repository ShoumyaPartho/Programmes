#include<iostream>
#include<ctime>
using namespace std;

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

void solve() {
	int tc, s, x, e; cin >> tc;
	while (tc--) {
		long long int totMin = 0;
		cin >> s; int intro[s];
		for (int i = 0; i < s; i++) cin >> intro[i];
		for (int i = 0; i < s; i++) {
			cin >> e;
			for (int j = 0; j < e; j++) {
				cin >> x;
				if (j > 0) totMin += (x - intro[i]);
				else totMin += x;
			}
		}
		cout << totMin << "\n";
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