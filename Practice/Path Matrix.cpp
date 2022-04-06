// Solved by: Shoumya

#include<iostream>
#include<ctime>
#include<vector>
#include<algorithm>
#include<iomanip>
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

int A[15][15][15], temp[15][15], B[15][15];

void findMat(int idx, int n) {
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			int s = 0;

			for (int k = 1; k <= n; k++)
				s += A[idx - 1][i][k] * temp[k][j];

			A[idx][i][j] = s;
			B[i][j] += s;
		}
	}
}

void solve() {
	int n;
	cout << "Please enter the dimension: "; cin >> n;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cout << "Enter [" << i << "][" << j << "] = ";
			cin >> A[1][i][j];
			temp[i][j] = B[i][j] = A[1][i][j];
		}
	}

	for (int i = 2; i <= n; i++)
		findMat(i, n);

	for (int i = 1; i <= n; i++) {
		cout << "\tHere A" << i << " is printed below:\n\n";

		for (int j = 1; j <= n; j++) {
			cout << "\t\t";

			for (int k = 1; k <= n; k++)
				cout << A[i][j][k] << " \n"[k == n];
		}

		cout << endl << endl;
	}

	cout << "Here B is:\n\n";

	for (int j = 1; j <= n; j++) {
		cout << "\t\t";

		for (int k = 1; k <= n; k++)
			cout << B[j][k] << " \n"[k == n];
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