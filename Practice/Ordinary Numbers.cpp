// Solved by: Shoumya

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

int numOfDig(int n) {
	int tot = 0;

	while (n) {
		tot++;
		n /= 10;
	}
	return tot;
}

int makeNum(int i, int num) {
	int n = 0;

	for (int j = 1; j <= num; j++) {
		n *= 10;
		n += i;
	}
	return n;
}

void solve() {
	int tc, n, ans, digNum, temp; cin >> tc;
	while (tc--) {
		cin >> n;
		ans = 0, digNum = numOfDig(n);

		for (int i = 1; i < digNum; i++)
			ans += 9;

		for (int i = 1; i < 10; i++) {
			temp = makeNum(i, digNum);
			if (temp <= n)
				ans++;
			else
				break;
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