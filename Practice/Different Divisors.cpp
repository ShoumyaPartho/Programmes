#include<iostream>
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

	int tc, d;
	cin >> tc;

	while (tc--) {
		cin >> d;
		int ara[2], check;

		for (int i = 1 + d;; i++) {
			check = 1;

			for (int j = 2; j * j <= i; j ++) {
				if (i % j == 0) {
					check = 0;
					break;
				}
			}

			if (check) {
				ara[0] = i;
				break;
			}
		}

		for (int i = ara[0] + d;; i++) {
			check = 1;

			for (int j = 2; j * j <= i; j ++) {
				if (i % j == 0) {
					check = 0;
					break;
				}
			}

			if (check) {
				ara[1] = i;
				break;
			}
		}

		cout << min(1ll * ara[0]*ara[1], 1ll * ara[0]*ara[0]*ara[0]) << endl;
	}

	return 0;
}