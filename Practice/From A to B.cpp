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

// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif
}

void solve() {
	int n, m, temp, cnt = 0;
	cin >> n >> m;

	if (n == m) cout << 0 << endl;
	else if (n < m) cout << m - n << endl;
	else {
		temp = n;
		while (1) {
			if (temp > m) {
				if (temp % 2) {
					temp++;
					cnt++;
				}
				temp /= 2;
				cnt++;
			}
			else if (temp == m) break;
			else if (temp < m) {
				cnt += (m - temp);
				break;
			}
		}

		cout << cnt << endl;
	}
}

int main() {
	fastIO();
	// clock_t start = clock();
	// // Write code here...

	solve();

// #ifndef ONLINE_JUDGE
// 	clock_t stop = clock(); cout.precision(3);
// 	cout << fixed << "\n\nTime taken: " << (double)(stop - start) / CLOCKS_PER_SEC * 1000 << " seconds" << endl;
// #endif

	return 0;
}