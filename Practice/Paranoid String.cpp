// Solved by: Shoumya

#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
	int t; cin >> t;

	while (t--) {
		int n; ll cnt = 0; cin >> n; cnt = n;
		char str[n + 10];

		for (int i = 1; i <= n; i++)
			cin >> str[i];

		for (int i = 2; i <= n; i++) {
			if (str[i] != str[i - 1])
				cnt += i - 1;
		}

		cout << cnt << endl;
	}

	return 0;
}