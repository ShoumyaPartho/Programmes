// Solved by: Shoumya

#include<iostream>
#include<ctime>
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

	int fibAra[25], n; fibAra[0] = fibAra[1] = 1;

	for (int i = 2; i < 22; i++)
		fibAra[i] = fibAra[i - 1] + fibAra[i - 2];

	cin >> n; cout << fibAra[n];
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

// Original Solution in said language

// a: = 0
// b: = 1
// for (i, 1, File standardInput readLine asNumber, b = a + b
// a = b - a)
// b println