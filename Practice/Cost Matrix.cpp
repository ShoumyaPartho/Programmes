// Solved by: Shoumya

#include<iostream>
#include<ctime>
#include<vector>
#include<algorithm>
#include<iomanip>
using namespace std;

#define endl "\n"
#define ll long long int
const int INF = 1e9 + 7;

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

int P[15][15][15];

void findMat(int idx, int n) {
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			P[idx][i][j] = min(P[idx - 1][i][j], P[idx - 1][i][idx] + P[idx - 1][idx][j]);
		}
	}
}

void solve() {
	int n;
	cout << "Please enter the dimension: "; cin >> n;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cout << "Enter [" << i << "][" << j << "] = ";
			cin >> P[0][i][j];
		}
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (not P[0][i][j])
				P[0][i][j] = INF;
		}
	}

	for (int i = 1; i <= n; i++)
		findMat(i, n);

	for (int i = 0; i <= n; i++) {
		cout << "\tHere Q" << i << " is printed below:\n\n";

		for (int j = 1; j <= n; j++) {
			cout << "\t\t";

			for (int k = 1; k <= n; k++)
				cout << P[i][j][k] << " \n"[k == n];
		}

		cout << endl << endl;
	}
}

int main() {
	// fastIO();
	// clock_t start = clock();
	// // Write code here...

	solve();

// #ifndef ONLINE_JUDGE
// 	clock_t stop = clock(); cout.precision(3);
// 	cout << fixed << "\n\nTime taken: " << (double)(stop - start) / CLOCKS_PER_SEC * 1000 << " seconds" << endl;
// #endif

	return 0;
}
