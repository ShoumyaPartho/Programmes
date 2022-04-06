#include<iostream>
#include<ctime>
#include<cstdio>
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

int ara[10] = {0, 1, 5, -1, -1, 2, -1, -1, 8, -1};

bool valid(int H, int M, int h, int m) {
	int a = ara[h / 10], b = ara[h % 10], c = ara[m / 10], d = ara[m % 10];
	if (a == -1 or b == -1 or c == -1 or d == -1) return false;
	if (H <= d * 10 + c) return false;
	if (M <= b * 10 + a) return false;
	return true;
}

void solve() {
	int tc, h, m, H, M; scanf("%d", &tc);
	while (tc--) {
		scanf("%d %d", &H, &M); scanf("%d:%d", &h, &m);

		while (true) {
			if (valid(H, M, h, m)) break;
			m++;
			if (m == M) m = 0, h++;
			if (h == H) h = 0;
		}
		printf("%02d:%02d\n", h, m);
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