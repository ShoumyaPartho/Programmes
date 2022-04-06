#include<bits/stdc++.h>
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
	ll t, n, k, cnt, t1, t2; cin >> t;
	while (t--) {
		cin >> n >> k; cnt = 0;
		string s;
		cin >> s;
		for (int i = 0; i < n; i++) {
			if (s[i] == '*') {
				s[i] = 'x';
				cnt++;
				break;
			}
		}
		for (int i = n - 1; i >= 0; i--) {
			if (s[i] == '*') {
				s[i] = 'x';
				cnt++;
				break;
			}
		}
		for (int i = 0; i < n; i++) {
			if (s[i] == 'x') {
				t1 = t2 = 0;
				for (int j = i + 1; j <= i + k and j < n; j++) {
					if (s[j] == 'x') {
						t1 = 1;
						break;
					}
				}
				if (t1) continue;
				for (int j = i + k; j > i and j < n; j--) {
					if (s[j] == '*') {
						s[j] = 'x';
						cnt++;
						break;
					}
				}
			}
		}
		cout << cnt << endl;
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