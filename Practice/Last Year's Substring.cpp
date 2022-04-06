#include<iostream>
#include<ctime>
#include<string>
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
	int tc, n, flag; cin >> tc;
	while (tc--) {
		cin >> n; flag = 0;
		string s;
		cin >> s;

		for (int i = 0; i <= 4; i++) {
			string temp = s.substr(0, i) + s.substr(n - 4 + i);
			if (temp == "2020") {
				cout << "YES\n";
				flag = 1;
				break;
			}
		}
		if (not flag) cout << "NO\n";
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