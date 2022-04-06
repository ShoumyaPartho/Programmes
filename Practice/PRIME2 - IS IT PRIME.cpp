// Solved by: Shoumya

#include<iostream>
#include<ctime>
#include<vector>
#include<unordered_set>
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

vector<int> check(6000);
unordered_set<int> st;

void sieve() {
	st.insert(2);

	for (int i = 4; i < 6000; i += 2)
		check[i] = 1;

	for (int i = 3; (i * i) <= 6000; i += 2) {
		if (not check[i]) {
			for (int j = i * i; j <= 6000; j += (2 * i))
				check[j] = 1;
		}
	}

	for (int i = 3; i <= 6000; i++) {
		if (not check[i])
			st.insert(i);
	}
}

void solve() {

	sieve();
	int tc, n; cin >> tc;

	while (tc--) {
		cin >> n;

		if (st.count(n))
			cout << "YES\n";

		else
			cout << "NO\n";
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