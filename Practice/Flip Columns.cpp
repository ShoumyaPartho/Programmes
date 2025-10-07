#include<iostream>
#include<cmath>
using namespace std;

#define ll long long int
#define el "\n";

int mat[20][20];

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

int getVal(int i, int m) {
	int sum = 0;

	for (int j = m - 1; j >= 0; j--)
		sum = sum + mat[i][j] * pow(2, m - 1 - j);

	sum += pow(2, m);

	return sum;
}

int getZeros(int num) {
	int cnt = 0;

	while (num) {
		if (not (num % 2))
			cnt++;
		num >>= 1;
	}
	return cnt;
}

int main() {
	fastIO();

	int n, m, k, ans = 0; cin >> n >> m >> k;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++)
			cin >> mat[i][j];
	}

	int val[40000] = {0};

	for (int i = 0; i < n; i++) {
		int x = getVal(i, m);
		val[x]++;
	}

	for (int i = 0; i < 40000; i++) {
		if (val[i]) {
			int cntZero = getZeros(i);
			if ((cntZero <= k) and (((k % cntZero) % 2) == 0))
				ans = max(ans, val[i]);
		}
	}

	cout << ans << el;
}

// void flip(int n, int j) {
// 	for (int i = 0; i < n; i++)
// 		mat[i][j] = 1 - mat[i][j];
// }

// void calc(int n, int m, int cur, int k, int &ans) {
// 	if (cur == k) {
// 		int cnt = 0;

// 		for (int i = 0; i < n; i++) {
// 			int flag = 1;

// 			for (int j = 0; j < m; j++) {
// 				if (mat[i][j] == 0) {
// 					flag = 0;
// 					break;
// 				}
// 			}

// 			if (flag)
// 				cnt++;
// 		}

// 		ans = max(ans, cnt);

// 		return;
// 	}

// 	for (int i = 0; i < m; i++) {
// 		flip(n, i);
// 		calc(n, m, cur + 1, k, ans);
// 		flip(n, i);
// 	}
// }

// int main() {
// 	fastIO();

// 	int n, m, k, ans = 0; cin >> n >> m >> k;

// 	for (int i = 0; i < n; i++) {
// 		for (int j = 0; j < m; j++)
// 			cin >> mat[i][j];
// 	}

// 	calc(n, m, 0, k, ans);

// 	cout << ans << el;
// }