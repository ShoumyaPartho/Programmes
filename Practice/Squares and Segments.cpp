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

int sRoot(int n) {
	ll low = 1, high = n, mid, t1, t2;
	while (low <= high) {
		mid = (low + high) / 2;
		t1 = (mid * mid), t2 = ((mid - 1) * (mid - 1));
		if (t1 == n)
			return (int)mid;
		else if (t1 > n and t2 < n)
			return (int)(mid - 1);
		else if (t1 > n)
			high = mid - 1;
		else if (t1 < n)
			low = mid + 1;
	}
}

int findMini(int maxi, int n) {
	int low = 1, high = maxi, mid;
	while (low <= high) {
		mid = (low + high) / 2;
		if ((maxi * mid) >= n and (maxi * (mid - 1) < n))
			return mid;
		else if (maxi * mid < n)
			low = mid + 1;
		else
			high = mid - 1;
	}
}

// Solution is greedy + math. Complexity = O(logN)

void solve() {
	int n, root, cnt; cin >> n;
	root = sRoot(n); // square root of n;

	if (root * root == n) cnt = root;
	else cnt = root + 1;

	cnt += findMini(cnt, n);
	cout << cnt << endl;
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