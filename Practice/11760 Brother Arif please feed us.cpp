#include<iostream>
#include<ctime>
#include<bitset>
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

void solve() {
	int r, c, n, x, y, cnt = 0; bitset<10010> row, col;
	while (scanf("%d %d %d", &r, &c, &n)) {
		if (!r and !c and !n) break;
		printf("Case %d: ", ++cnt);
		//row.reset(); col.reset();
		for (int i = 0; i < 10010; i++) row[i] = col[i] = 0;
		for (int i = 0; i < n; i++) {
			scanf("%d %d", &x, &y);
			row[x] = 1; col[y] = 1;
		}
		scanf("%d %d", &x, &y);

		if (!row[x] and !col[y])
			printf("Escaped again! More 2D grid problems!\n");
		else if (((x - 1) >= 0) and (!row[x - 1] and !col[y]))
			printf("Escaped again! More 2D grid problems!\n");
		else if (((x + 1) < r) and (!row[x + 1] and !col[y]))
			printf("Escaped again! More 2D grid problems!\n");
		else if (((y - 1) >= 0) and (!row[x] and !col[y - 1]))
			printf("Escaped again! More 2D grid problems!\n");
		else if (((y + 1) < c) and (!row[x] and !col[y + 1]))
			printf("Escaped again! More 2D grid problems!\n");
		else
			printf("Party time! Let's find a restaurant!\n");
	}
}

int main() {
	fastIO();
	clock_t start = clock();
	// Write code here...

	solve();

#ifndef ONLINE_JUDGE
	clock_t stop = clock(); cout.precision(10);
	//cout << "\n\nTime taken: " << (double)(stop - start) / CLOCKS_PER_SEC * 1000 << " seconds" << endl;
#endif

	return 0;
}