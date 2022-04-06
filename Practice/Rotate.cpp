// Solved by: Shoumya

#include<iostream>
#include<ctime>
#include<vector>
#include<string>
#include<algorithm>
#include<iomanip>
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
	string s, ans; cin >> s;
	int carry = 0, temp;

	for (int i = 0; i < 3; i++) {
		temp = (s[0] - '0' + s[1] - '0' + s[2] - '0' + carry);
		carry = temp / 10;
		temp = temp - (carry * 10);
		ans.push_back('0' + temp);

		if (i == 2 and carry)
			ans.push_back('0' + carry);
	}

	reverse(ans.begin(), ans.end()); cout << ans << endl;
}

int main() {
	fastIO();
	clock_t start = clock();
	// Write code here...

	solve();

#ifndef ONLINE_JUDGE
	clock_t stop = clock(); cout.precision(3);
	cout << fixed << "\n\nTime taken: " << (double)(stop - start) / CLOCKS_PER_SEC * 1000 << " seconds" << endl;
#endif

	return 0;
}