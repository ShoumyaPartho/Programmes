#include<iostream>
#include<ctime>
#include<vector>
using namespace std;

#define endl "\n"
#define ll long long int
const int MAX = 1e9;

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

class WORMHOLE {
public:
	int from, to, year;
};

vector <WORMHOLE> wormHoles;
int years[1010];

bool bellmanFord(int n) {
	years[1] = 0;

	for (int step = 1; step < n; step++) {
		for (int i = 1; i < wormHoles.size(); i++) {
			if (years[wormHoles[i].from] != MAX and (years[wormHoles[i].from] + wormHoles[i].year < years[wormHoles[i].to]))
				years[wormHoles[i].to] = years[wormHoles[i].from] + wormHoles[i].year;
		}
	}

	for (int i = 1; i < wormHoles.size(); i++) {
		if (years[wormHoles[i].from] != MAX and (years[wormHoles[i].from] + wormHoles[i].year < years[wormHoles[i].to]))
			return true;
	}
	return false;
}

void solve() {
	int tc, n, m; cin >> tc;

	while (tc--) {

		cin >> n >> m;

		wormHoles.clear(); WORMHOLE data; wormHoles.push_back(data);

		for (int i = 1; i <= n; i++)
			years[i] = MAX;

		for (int i = 1; i <= m; i++) {

			cin >> data.from >> data.to >> data.year;
			data.from++; data.to++;

			wormHoles.push_back(data);
		}

		bool res = bellmanFord(n);

		if (res) cout << "possible" << endl;
		else cout << "not possible" << endl;
	}
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