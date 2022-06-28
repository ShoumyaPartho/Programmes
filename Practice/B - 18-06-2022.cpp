// Solved by: Shoumya

#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long int

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
}

void solve() {
	string str, word, s1, s2; int val, sign, sum, flag, temp;
	map<string, int> mpS;
	map<int, string> mpI;

	while (getline(cin, str)) {
		stringstream strm(str);

		while (strm >> word) {
			if (word == "def") {
				strm >> s1 >> val;
				if (mpS.count(s1)) {
					temp = mpS[s1];
					mpI.erase(temp);
				}
				mpS[s1] = val;
				mpI[val] = s1;
			}

			else if (word == "clear") {
				mpS.clear();
				mpI.clear();
			}

			else if (word == "calc") {
				for (int i = 5; i < str.size(); i++)
					cout << str[i];
				cout << " ";

				sign = 1, sum = 0, flag = 1;
				while (1) {
					strm >> s1;

					if (s1 == "+")
						sign = 1;

					else if (s1 == "-")
						sign = -1;

					else if (s1 == "=") {
						if (flag and mpI.count(sum))
							cout << " " << mpI[sum] << endl;

						else
							cout << " unknown" << endl;

						break;
					}

					else {
						if (mpS.count(s1))
							sum += (sign * mpS[s1]);

						else
							flag = 0;
					}
				}
			}
		}
	}
}

int main() {
	fastIO();

	// solve();

	int tc, t = 1; // cin >> t;

	for (tc = 1; tc <= t; tc++) {
		// cout<<"Case "<<tc<<": ";
		solve();
	}

	return 0;
}