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

// Here parity = 0 denotes this element is to be placed at left.
// And parity = 1 denotes this element is to be palcd at right.
// If tempParity != parity, then it is obvious we need enough
// Memory on the identified side of the elemnt to accommmodate
// current element along with the previous one.
// Otherwise we need only one space on the identified side.

int findAns(int *temp, string &s, const int n, int idx, int prev, bool parity) {
	if (idx == n)
		return (temp[idx] = findAns(temp, s, n, idx - 1, prev + 1, s[idx - 1] == 'R') + (s[idx - 1] == 'R' ? 1 : -1));

	if (idx == 0)
		return temp[0];

	bool tempParity = (s[idx - 1] == 'R');

	if (tempParity == parity)
		return (temp[idx] = findAns(temp, s, n, idx - 1, prev + 1, s[idx - 1] == 'R') + (s[idx - 1] == 'R' ? 1 : -1));

	else
		return (temp[idx] = findAns(temp, s, n, idx - 1, prev + 1, s[idx - 1] == 'R') + (s[idx - 1] == 'R' ? (prev + 1) : (-prev - 1)));

}

void solve() {
	int n; cin >> n;
	string s; cin >> s;
	int pos[n + 5], temp[n + 5];

	temp[0] = (s[0] == 'L' ? n + 1 : 1);

	findAns(temp, s, n, n, 0, false);

	for (int i = 0; i <= n; i++)
		pos[temp[i]] = i;

	for (int i = 1; i <= (n + 1); i++)
		cout << pos[i] << " \n"[i == (n + 1)];
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