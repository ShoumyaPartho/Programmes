// Solved by: Shoumya

#include<iostream>
#include<ctime>
#include<vector>
#include<map>
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

bool comparator1(pair<int, pair<int, int> > &a, pair<int, pair<int, int> > &b) {
	return a.first > b.first;
}

bool comparator2(pair<int, pair<int, int> > &a, pair<int, pair<int, int> > &b) {
	return a.second.first < b.second.first;
}

void solve() {
	int tc, n, x; cin >> tc;

	while (tc--) {
		cin >> n; ll ans = 0;
		vector<pair<int, pair<int, int> > > nums(n + 1, {0, {0, 0}});

		// Here nums[i].first = value, nums[i].second.first = Index at input
		// and  nums[i].second.second = the index where it should be which will we determine.

		for (int i = 1; i <= n; i++) {
			cin >> x;
			nums[i] = {x, {i, 0}};
		}

		sort(nums.begin() + 1, nums.end(), comparator1);

		for (auto i = 1, cnt = 1; i <= n; i += 2, cnt++)
			nums[i].second.second = cnt;

		for (auto i = 2, cnt = 1; i <= n; i += 2, cnt++)
			nums[i].second.second = -cnt;

		for (auto i = 1; i <= n; i++)
			ans += (2ll * abs(nums[i].second.second) * nums[i].first);

		cout << ans << endl;

		sort(nums.begin() + 1, nums.end(), comparator2);

		cout << 0 << " ";

		for (auto i = 1; i <= n; i++)
			cout << nums[i].second.second << " \n"[i == n];

		// Easier Implementation

		// void solve() {
		// 	scanf("%d",&n);
		// 	rep(i,1,n+1) scanf("%d",a+i),p[i]={a[i],i};
		// 	sort(p+1,p+n+1);
		// 	reverse(p+1,p+n+1);
		// 	ll ans=0;
		// 	rep(i,1,n+1) {
		// 		if (i%2==0) pos[p[i].se]=i/2;
		// 		else pos[p[i].se]=-(i/2+1);
		// 		ans+=(ll)abs(pos[p[i].se])*p[i].fi;
		// 	}
		// 	printf("%lld\n",ans*2);
		// 	rep(i,0,n+1) printf("%d ",pos[i]);
		// 	puts("");
		// }
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