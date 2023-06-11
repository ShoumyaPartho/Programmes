// Solved by: Shoumya

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
	int n; cin >> n;
	string str = to_string(n);
	reverse(str.begin(), str.end());

	if (n < 1e3)
		cout << n << endl;

	else if (n < 1e4) {
		for (int i = 0; i < 1; i++)
			str[i] = '0';

		reverse(str.begin(), str.end());

		cout << str << endl;
	}

	else if (n < 1e5) {
		for (int i = 0; i < 2; i++)
			str[i] = '0';

		reverse(str.begin(), str.end());

		cout << str << endl;
	}

	else if (n < 1e6) {
		for (int i = 0; i < 3; i++)
			str[i] = '0';

		reverse(str.begin(), str.end());

		cout << str << endl;
	}

	else if (n < 1e7) {
		for (int i = 0; i < 4; i++)
			str[i] = '0';

		reverse(str.begin(), str.end());

		cout << str << endl;
	}

	else if (n < 1e8) {
		for (int i = 0; i < 5; i++)
			str[i] = '0';

		reverse(str.begin(), str.end());

		cout << str << endl;
	}

	else if (n < 1e9) {
		for (int i = 0; i < 6; i++)
			str[i] = '0';

		reverse(str.begin(), str.end());

		cout << str << endl;
	}
}

int main() {
	fastIO();

	solve();

	return 0;
}