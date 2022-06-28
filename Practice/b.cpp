// Solved by: Shoumya

#include<bits/stdc++.h>
using namespace std;

#define inf (ll)1e16
#define ll long long int
#define mod (ll)1000000007
#define fileout freopen("output.txt", "w", stdout)
#define filein freopen("input.txt", "r", stdin)
#define pi acos(-1.0)
#define all(x) x.begin(), x.end()
#define f(i, n) for (ll i = 0; i < n; i++)
#define sc(a) scanf("%lld", &a)
#define pr(a) printf("%lld\n", a)
#define vll vector<long long int>
#define endl '\n'

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

class SparseTable
{

	vector<vector<ll>> table;
	vll lg;
	ll ln, N;

public:
	SparseTable(ll n)
	{
		N = n;
		ln = log2(N) + 1;
		table.assign(N, vll(ln));
		lg.assign(N + 1, 0);
		for (ll i = 2; i <= N; i++)
		{
			lg[i] = lg[i / 2] + 1;
		}
	}
	void create(vll &v)
	{
		for (ll i = 0; i < N; i++)
		{
			table[i][0] = v[i];
		}
		for (ll j = 1; j < ln; j++)
		{
			ll k = (1 << j);
			for (ll i = 0; i + k <= N; i++)
			{
				table[i][j] = min(table[i][j - 1], table[i + k / 2][j - 1]);
				//Here we can also max, xor, gcd, lcd, or, and, sum etc
			}
		}
	}

	ll RMQ(ll L, ll R)//Range Minimum Query, works for min, max, gcd etc...O(1)
	{
		ll div = lg[R - L + 1];
		return min(table[L][div], table[R - (1 << div) + 1][div]);
	}

	ll NMQ(ll L, ll R) //Normal Query, works for sum, etc....O(logn)
	{
		ll ans = inf;
		for (ll k = ln; k >= 0; k--)
		{
			if ((1 << k) <= R - L + 1)
			{
				ans = min(ans, table[L][k]);
				L = L + (1 << k);
			}
		}
		return ans;
	}
};

SparseTable stable(200005);

map<ll, ll>vindex;

ll result(ll l, ll r)
{
	if (l <= r) {
		ll minvalue = stable.RMQ(l, r);
		ll mvindex = vindex[minvalue];
		ll sum = minvalue * (mvindex - l + 1) * (r - mvindex + 1);
		return sum + result(l, mvindex - 1) + result(mvindex + 1, r);
	}
	else
		return 0;
}

void solve() {
	ll n;
	cin >> n;
	vll v(n);
	f(i, n)
	{
		cin >> v[i];
		vindex[v[i]] = i;
	}
	stable.create(v);
	cout << result(0, n - 1) << endl;

}

int main() {
	fastIO();

	// solve();

	int tc, t = 1; // cin>>t;

	for (tc = 1; tc <= t; tc++) {
		// cout<<"Case "<<tc<<": ";
		solve();
	}

	return 0;
}