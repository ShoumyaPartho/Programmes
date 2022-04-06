#include<iostream>
#include<algorithm>
using namespace std;

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

int main() {
	fastIO();

	int tc, n, d;
	cin >> tc;

	while (tc--) {
		cin >> n >> d;
		int ara[n], possible = 0;
		for (int i = 0; i < n; i++) cin >> ara[i];
		sort(ara, ara + n);

		if (ara[0] <= d && ara[1] <= d && (ara[0] + ara[1]) <= d) cout << "YES\n";

		else {
			possible = 1;

			for (int i = 0; i < n; i++) {
				if (ara[i] > d)  {
					possible = 0;
					break;
				}
			}
			cout << (possible ? "YES\n" : "NO\n");
		}
	}
	return 0;
}