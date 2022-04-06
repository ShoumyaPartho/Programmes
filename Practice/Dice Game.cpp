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

void solve() {
	int a, b, c, d;
	int p, q, r, s;
	cin >> a >> b >> c >> d;
	cin >> p >> q >> r >> s;
	int gunnar = 0, emma = 0;
	for (int i = a; i <= b; i++)
	{
		for (int j = c; j <= d; j++)
		{
			for (int k = p; k <= q; k++)
			{
				for (int l = r; l <= s; l++)
				{
					if (i + j > k + l)
						gunnar++;
					if (i + j < k + l)
						emma++;
				}
			}
		}
	}
	if (gunnar > emma)
		cout << "Gunnar";
	else if (gunnar < emma)
		cout << "Emma";
	else
		cout << "Tie";
	cout << endl;
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