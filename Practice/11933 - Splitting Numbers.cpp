// Explanation: https://www.davidudelson.com/blog/2015/06/29/uva-11933-splitting-numbers/

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

void solve() {
	ll n, a, b, i; bool check;
	while (scanf("%lld", &n) and n) {
		check = false; i = a = b = 0;
		while ((1ll << i) <= n) {
			if (n & (1ll << i)) {
				if (!check) {
					a |= (1ll << i);
					check = !check;
				}
				else {
					b |= (1ll << i);
					check = !check;
				}
			}
			i++;
		}
		printf("%lld %lld\n", a, b);
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