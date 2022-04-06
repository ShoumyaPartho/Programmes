#include<iostream>
#include<ctime>
#include<cstdio>
using namespace std;

#define endl "\n"
#define ll long long int
#define swapp(a,b) a=a^b,b=a^b,a=a^b

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

// Straight-cut implementation with bit manipulation
void solve1() {
	int n;
	while (cin >> n) {
		int ans = 0;
		for (int i = 0; i < 4; i++) {
			ans = (ans << 8) | ((n >> (8 * i)) & 255);
		}
		printf("%d converts to %d\n", n, ans);
	}
}


// Becomes easier with usage of char pointer
void solve2() {
	int n;
	while (scanf("%d", &n) != EOF) {
		int ans = n; char *bits = (char *) &ans;
		swapp(bits[0], bits[3]); swapp(bits[1], bits[2]);
		printf("%d converts to %d\n", n, ans);
	}
}

int main() {
	fastIO();
	clock_t start = clock();
	// Write code here...

	solve1();
	// solve2();

#ifndef ONLINE_JUDGE
	clock_t stop = clock(); cout.precision(10);
	cout << "\n\nTime taken: " << (double)(stop - start) / CLOCKS_PER_SEC * 1000 << " seconds" << endl;
#endif

	return 0;
}