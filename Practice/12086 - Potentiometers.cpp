#include<iostream>
// #include<ctime>
#include<vector>
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

class FenwickTree {

private:

	vector<int> ft;
	int LSone(int i) { return i & (-i);}

public:

	FenwickTree(int n) {ft.assign(n + 1, 0);}

	int rsq(int k) {
		int sum = 0;
		for (; k; k -= LSone(k)) sum += ft[k];
		return sum;
	}

	int rsq(int a, int b) {
		return rsq(b) - (a == 1 ? 0 : rsq(a - 1));
	}

	void adjust(int k, int v) {
		for (; k < ft.size(); k += LSone(k)) ft[k] += v;
	}
};

void solve() {
	int n, tc = 0, a, b;

	while (1) {
		cin >> n;

		if (n == 0)
			break;

		if (tc)
			cout << endl;

		cout << "Case " << ++tc << ":\n";

		vector<int> v(n + 1, 0); FenwickTree ft(n); string s;

		for (int i = 1; i <= n; i++)
			cin >> v[i];

		for (int i = 1; i <= n; i++)
			ft.adjust(i, v[i]);

		while (cin >> s, s != "END") {
			cin >> a >> b;

			if (s == "M")
				cout << ft.rsq(a, b) << endl;

			else if (s == "S") {
				ft.adjust(a, b - v[a]);
				v[a] = b;
			}
		}
	}
}

int main() {
	fastIO();
	// clock_t start = clock();
	// Write code here...

	solve();

#ifndef ONLINE_JUDGE
	clock_t stop = clock(); cout.precision(10);
	cout << "\n\nTime taken: " << (double)(stop - start) / CLOCKS_PER_SEC * 1000 << " seconds" << endl;
#endif

	return 0;
}