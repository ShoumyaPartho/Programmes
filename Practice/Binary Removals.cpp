// Solved by: Shoumya

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

	int tc, dZero, dOne; cin >> tc;

	while (tc--) {

		string s;
		cin >> s;
		dZero = -1, dOne = s.size();

		for (int i = s.size() - 2; i >= 0; i--) {

			if (s[i] == '0' and s[i + 1] == '0')
				dZero = max(dZero, i);

			else if (s[i] == '1' and s[i + 1] == '1')
				dOne = min(dOne, i);
		}

		if (dZero == -1 or dOne == s.size())
			cout << "YES\n";

		else if (dZero > dOne)
			cout << "NO\n";

		else
			cout << "YES\n";
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