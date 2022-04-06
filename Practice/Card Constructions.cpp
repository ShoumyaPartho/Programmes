#include<iostream>
#include<ctime>
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

ll numOfCard(ll h) {
	return h * (3 * h + 1) / 2;
}

ll numOfHeight(ll n) {
	ll tempHeight = 0, low = 1, high = 100000, mid;
	while (low <= high) {
		mid = (low + high) / 2;
		ll temp = numOfCard(mid);
		if (temp <= n) {
			tempHeight = mid;
			low = mid + 1;
		}
		else
			high = mid - 1;
	}
	return tempHeight;
}

void solve() {
	ll tc, n, ans, nowHeight, cardNum; cin >> tc;
	while (tc--) {
		cin >> n; ans = 0ll;

		while (n > 1) {
			nowHeight = 0;
			nowHeight = numOfHeight(n);
			cardNum = numOfCard(nowHeight);
			if (nowHeight) ans++;
			n -= cardNum;
		}
		cout << ans << endl;
	}
}

int main() {
	fastIO();
	clock_t start = clock();
	// Write code here...

	solve();

#ifndef ONLINE_JUDGE
	clock_t stop = clock(); cout.precision(10);
	cout << "\n\nTime taken: " << (double)(stop - start) / CLOCKS_PER_SEC * 1000 << " seconds" << endl;
#endif

	return 0;
}