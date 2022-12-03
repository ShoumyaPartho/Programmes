// Solved by: Shoumya

#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long int
const int MAX = 1e9 + 7;

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

void solve() {
	int l, cnt = 0, prevTrack = 0, coins = 0, temp, tCnt1, tCoin1, tCnt2, tCoin2, tCnt21, tCoin21, tCnt22, tCoin22, tCnt4, tCoin4;
	cin >> l;

	// while (cnt <= l) {
	// 	tCnt1 = cnt + 1, tCoin1 = coins + 1;

	// 	tCnt4 = (cnt + cnt <= l ? cnt : MAX); tCoin4 = (cnt + cnt <= l ? coins + 4 : MAX);

	// 	tCnt21 = (prevTrack + prevTrack <= l ? prevTrack + prevTrack : MAX); tCoin21 = (tCnt21 != MAX ? coins + 2 : MAX);
	// 	tCnt22 = (tCnt4 != MAX ? cnt + cnt : MAX); tCoin22 = (tCnt22 != MAX ? coins + 6 : MAX);

	// 	if (tCoin22 != MAX and tCoin21 != MAX and (tCnt22 - tCnt21 >= 4))
	// 		tCnt2 = tCnt22, tCoin2 = tCoin22;

	// 	else
	// 		tCnt2 = tCnt21, tCoin2 = tCoin21;

	// 	if (tCnt2 != MAX and tCnt2 > tCnt1) {
	// 		cnt = tCnt2, coins = tCoin2;

	// 		if (tCnt2 == tCnt22)
	// 			prevTrack = tCnt2;
	// 	}

	// 	else
	// 		coins = tCoin1, cnt = tCnt1;

	// 	cout << "Coins, Count : " << coins << " " << cnt << endl;
	// }

	// cout << coins << endl;

	if (l <= 13)
		cout << l << endl;

	else if (l == 14)
		cout << 13 << endl;

	else if (l == 15)
		cout << 13 << endl;

	else if (l == 16)
		cout << 14 << endl;

	//
	else if (l == 17)
		cout << 15 << endl;

	else if (l == 18)
		cout << 14 << endl;

	//
	else if (l == 19)
		cout << 15 << endl;

	else if (l == 20)
		cout << 15 << endl;
}

int main() {
	fastIO();

	// solve();

	int tc, t; cin >> t;

	for (tc = 1; tc <= t; tc++) {
		cout << "Case #" << tc << ": ";
		solve();
	}

	return 0;
}