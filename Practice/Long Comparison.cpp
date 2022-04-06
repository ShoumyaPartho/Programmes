// Solved by: Shoumya

#include<iostream>
#include<ctime>
#include<vector>
#include<algorithm>
#include<iomanip>
using namespace std;

#define endl "\n"
#define ll long long int
const int  MAX = 1e6;

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

void getDigits(int n, vector<int> &digits) {
	while (n) {
		digits.push_back(n % 10);
		n /= 10;
	}

	reverse(digits.begin(), digits.end());
}

void solve() {
	int tc, x1, x2, p1, p2, flag;  cin >> tc;

	while (tc--) {
		cin >> x1 >> p1 >> x2 >> p2; flag = 0; // 0 = equal, 1 = greater, 2 = smaller.

		vector<int> digitsX1, digitsX2;
		getDigits(x1, digitsX1), getDigits(x2, digitsX2);

		if ((p1 + digitsX1.size()) != (p2 + digitsX2.size()))
			flag = ((p1 + digitsX1.size()) < (p2 + digitsX2.size()) ? 2 : 1);

		else {
			for (int i = 0; i < (max(digitsX1.size(), digitsX2.size())); i++) {
				if ((i < digitsX1.size()) and (i < digitsX2.size())) {
					if (digitsX1[i] < digitsX2[i]) {
						flag = 2;
						break;
					}

					else if (digitsX1[i] > digitsX2[i]) {
						flag = 1;
						break;
					}

					else
						continue;
				}

				else if ((i >= digitsX1.size()) and (i < digitsX2.size()) and digitsX2[i]) {
					flag = 2;
					break;
				}

				else if ((i < digitsX1.size()) and (i >= digitsX2.size()) and digitsX1[i]) {
					flag = 1;
					break;
				}
			}
		}

		if (not flag) {
			cout << "=" << endl;
			continue;
		}

		else
			cout << (flag == 1 ? ">" : "<") << endl;
	}
}

int main() {
	fastIO();
	clock_t start = clock();
	// Write code here...

	solve();

#ifndef ONLINE_JUDGE
	clock_t stop = clock(); cout.precision(3);
	cout << fixed << "\n\nTime taken: " << (double)(stop - start) / CLOCKS_PER_SEC * 1000 << " seconds" << endl;
#endif

	return 0;
}