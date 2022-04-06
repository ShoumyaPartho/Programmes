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

	int n, div = 10;
	cin >> n;

	while (div--) {
		if (n % div == 0) {
			cout << div << "\n";
			break;
		}
	}

	return 0;
}