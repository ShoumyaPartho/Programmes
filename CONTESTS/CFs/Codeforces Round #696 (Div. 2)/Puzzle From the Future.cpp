#include <iostream>
#include <string>
using namespace std;

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif // ONLINE_JUDGE
}

int main() {
	fastIO();

	int tc, n, len, temp;
	cin >> tc;

	while (tc--) {
		cin >> n;
		string a = "1", b;
		cin >> b;
		len = b.length();
		temp = (b[0] - '0') + 1;

		for (auto i = 1; i < n; i++) {
			if (((b[i] - '0') + 1) == temp) a += '0';
			else a += '1';
			temp = (a[i] - '0') + (b[i] - '0');
		}
		cout << a << "\n";
	}
	return 0;
}