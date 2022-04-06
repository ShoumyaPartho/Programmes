#include<iostream>
#include<ctime>
#include<set>
using namespace std;

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

void solve() {
	int n; cin >> n;
	int ara[n + 1], i, j;
	long long int ans = 0, preSum[n + 1] = {0};
	set<long long int> st;
	for (i = 1; i <= n; i++) cin >> ara[i];
	for (i = 1; i <= n; i++) preSum[i] = preSum[i - 1] + ara[i];
	i = j = 0; st.insert(0);

	for (; i < n; i++) {
		for (; j < n; j++) {
			if (not st.count(preSum[j + 1])) st.insert(preSum[j + 1]);
			else break;
		}
		ans += j - i;
		st.erase(preSum[i]);
	}
	cout << ans << "\n";
}

int main() {
	fastIO();
	clock_t start = clock();
	// Writhe code here...

	solve();

#ifndef ONLINE_JUDGE
	clock_t stop = clock(); cout.precision(10);
	cout << "\n\nTime taken: " << (double)(stop - start) / CLOCKS_PER_SEC * 1000 << " seconds" << endl;
#endif

	return 0;
}