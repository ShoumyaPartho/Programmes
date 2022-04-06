// Solved by: Shoumya

#include<iostream>
#include<ctime>
#include<vector>
#include<set>
#include<algorithm>
#include<iomanip>
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
	int tc, n, x, diffNums, temp; cin >> tc;

	while (tc--) {
		cin >> n; temp = n;

		set<int> st;

		while (temp--) {
			cin >> x;
			st.insert(x);
		}

		temp = diffNums = st.size();

		for (int i = 1; i <= n; i++) {
			if (i <= diffNums)
				cout << diffNums;

			else
				cout << ++temp;

			cout << " \n"[i == n];
		}
	}
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