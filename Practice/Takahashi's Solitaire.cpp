// Solved by: Shoumya

#include<bits/stdc++.h>
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
	ll n, m, x, sum = 0, ans, k, p, v; cin >> n >> m;
	map<ll, ll> mp;
	vector<pair<ll, ll> > tracks;

	for (int i = 0; i < n; i++) {
		cin >> x;
		sum += x;
		mp[x]++;
	}

	for (auto it : mp)
		tracks.push_back(it);

	k = tracks.size(), ans = sum;
	vector<ll> s(k, 0);

	if (k == m) {
		cout << 0 << endl;
		return;
	}

	for (int i = 0; i < k; i++) {
		if (tracks[(i + 1) % k].first != (tracks[i].first + 1) % m) {
			p = i;
			break;
		}
	}

	for (int i = 0; i < k; i++) {
		x = (p - i + k) % k;
		s[x] = sum;
		if (tracks[(x + 1) % k].first == ((tracks[x].first + 1) % m))
			s[x] = s[(x + 1) % k];

		s[x] -= (tracks[x].first * tracks[x].second);
	}

	for (int i = 0; i < k; i++)
		ans = min(ans, s[i]);

	cout << ans << endl;
}

int main() {
	fastIO();

	solve();

	return 0;
}