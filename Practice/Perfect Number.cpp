// Solved by Shoumya

#include<iostream>
#include<ctime>
using namespace std;

#define endl "\n"
#define ll long long int
const ll MAX = 10010;

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

ll sumOfNum(ll num) {
	ll temp, sum = 0;
	while (num) {
		temp = num % 10;
		sum += temp;
		num /= 10;
	}
	return sum;
}

void solve() {
	ll ara[MAX]; ara[0] = 0;
	for (int i = 1, num = 1; i < MAX - 5; num++) {
		if (sumOfNum(num) == 10)
			ara[i++] = num;
	}
	ll k; cin >> k;
	cout << ara[k] << endl;
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