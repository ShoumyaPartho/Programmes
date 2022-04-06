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

	int tc, n, k, num, rej, tooSlow, bot, qCnt;
	cin >> tc;

	while (tc--) {
		cin >> n >> k;
		rej = 0, tooSlow = 0, bot = 1, qCnt = 0;

		for (int i = 0; i < n; i++) {
			cin >> num;
			if (num >= 0) qCnt++;
			if (num > k) tooSlow++;
			if (num != 1 and num != 0) bot = 0;
		}

		if (qCnt < ((n + 2 - 1) / 2)) cout << "Rejected\n";
		else if (tooSlow) cout << "Too Slow\n";
		else if (bot) cout << "Bot\n";
		else cout << "Accepted\n";
	}

	return 0;
}