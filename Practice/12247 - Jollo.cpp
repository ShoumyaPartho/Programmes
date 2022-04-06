// Solved by: Shoumya

#include<iostream>
#include<ctime>
#include<vector>
#include<algorithm>
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
	vector<int> cele(5, 0), meye(5, 0);

	while (cin >> meye[1] >> meye[2] >> meye[3] >> cele[1] >> cele[2], meye[1], meye[2], meye[3], cele[1], cele[2]) {

		sort(meye.begin() + 1, meye.begin() + 4);
		sort(cele.begin() + 1, cele.begin() + 3);
		bool check;
		vector<bool> status(60, true);

		status[meye[1]] = false;
		status[meye[2]] = false;
		status[meye[3]] = false;
		status[cele[1]] = false;
		status[cele[2]] = false;

		if (cele[1] > meye[3]) {

			for (int i = 1;; i++) {
				if (status[i]) {
					cout << i << endl;
					break;
				}
			}
		}

		else {

			if (cele[2] > meye[3]) {

				if (cele[1] > meye[2]) {

					check = true;

					for (int i = meye[2] + 1; i <= 52; i++) {

						if (status[i]) {
							cout << i << endl;
							check = false;
							break;
						}
					}

					if (check)
						cout << -1 << endl;
				}

				else {

					check = true;

					for (int i = meye[3] + 1; i <= 52; i++) {

						if (status[i]) {
							cout << i << endl;
							check = false;
							break;
						}
					}

					if (check)
						cout << -1 << endl;
				}
			}

			else {

				if (cele[2] > meye[2]) {

					if (cele[1] > meye[2]) {

						check = true;

						for (int i = meye[2] + 1; i <= 52; i++) {

							if (status[i]) {
								cout << i << endl;
								check = false;
								break;
							}
						}

						if (check)
							cout << -1 << endl;
					}

					else
						cout << -1 << endl;
				}

				else
					cout << -1 << endl;
			}
		}
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