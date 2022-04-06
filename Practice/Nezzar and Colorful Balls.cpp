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

	int tc, n, num, tempColor, maxColor, temp;
	cin >> tc;
	while (tc--) {
		cin >> n >> num;
		tempColor = 1, maxColor = 1, temp = num;
		for (int i = 1; i < n; i++) {
			cin >> num;
			if (num == temp) tempColor++;
			else tempColor = 1;
			maxColor = max(maxColor, tempColor);
			temp = num;
		}
		cout << maxColor << "\n";
	}

	return 0;
}