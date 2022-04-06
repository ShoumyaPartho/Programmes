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

	int tc, n, color, maxColor;
	cin >> tc;

	while (tc--) {
		cin >> n;
		int ara[n];

		for (int i = 0; i < n; i++) cin >> ara[i];
		color = maxColor = 1;

		for (int i = 1; i < n; i++) {

			if (ara[i - 1] == ara[i]) color++;
			else if ((color - 1) > 0) color = 1;
			//else color--;

			maxColor = max(color, maxColor);
		}
		cout << maxColor << "\n";
	}

	return 0;
}