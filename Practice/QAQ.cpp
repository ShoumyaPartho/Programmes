#include<iostream>
#include<ctime>
#include<string>
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
	string s; cin >> s;
	int len = s.size(), q = 0, qTemp = 0, tot = 0;
	for (int i = 0; i < len; i++) q += (s[i] == 'Q');
	for (int i = 0; i < len; i++) {
		if (s[i] == 'Q') qTemp++;
		else if (s[i] == 'A') tot += (qTemp * (q - qTemp));
	}
	cout << tot << endl;
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