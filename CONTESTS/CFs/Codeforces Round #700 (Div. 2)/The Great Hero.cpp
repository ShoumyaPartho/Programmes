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

	int tc, a, b, n, num; cin >> tc;
	while (tc--) {
		cin >> a >> b >> n;
		int enemyAttack[n + 10], enemyHealth[n + 10], alive = 1;

		for (int i = 0; i < n; i++) cin >> enemyAttack[i];
		for (int i = 0; i < n; i++) {
			cin >> enemyHealth[i];
			if (enemyHealth[i] > 0) {
				num = (enemyHealth[i] + a - 1) / a;
			}
		}
	}

	return 0;
}