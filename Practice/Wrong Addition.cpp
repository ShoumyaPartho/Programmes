// Solved by: Shoumya

#include<iostream>
#include<ctime>
#include<vector>
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
	ll tc, a, s, flag; cin >> tc;

	while (tc--) {
		cin >> a >> s; flag = 0;

		if (a == s) {
			cout << 0 << endl;
			continue;
		}

		if (a > s) {
			cout << -1 << endl;
			continue;
		}

		string s1 = to_string(a), s2 = to_string(s);
		vector<char> ans;

		for (int i = s2.size() - 1, j = s1.size() - 1; i >= 0; i--, j--) {
			if (j < 0) {
				ans.push_back(s2[i]);
				continue;
			}

			if (s2[i] >= s1[j])
				ans.push_back('0' + (s2[i] - s1[j]));

			else {
				if (not i or (i and s2[i - 1] != '1')) {
					flag = 1;
					break;
				}
				ans.push_back('0' + (10 + s2[i] - s1[j]));
				i--;
				if (i < j and i >= 0 and j >= 0) {
					flag = 1;
					break;
				}
			}
		}

		if (flag) {
			cout << -1 << endl;
			continue;
		}

		reverse(ans.begin(), ans.end());

		int i = 0;
		while (ans[i] == '0')
			i++;

		for (; i < ans.size(); i++)
			cout << ans[i];
		cout << endl;
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