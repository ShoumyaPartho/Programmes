// Solved by: Shoumya

#include<iostream>
#include<ctime>
#include<vector>
#include<algorithm>
#include<iomanip>
using namespace std;

#define endl "\n"
#define ll long long int
const int MAX = 1e9 + 7;

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}



class Nodes {
public:
	int id, in = 0, out = 0, lab, prev, cnt;
};

int labParity;

bool cmprtr(Nodes &a, Nodes &b) {
	if (a.in != b.in)
		return a.in < b.in;

	else {

		return
		    a.lab == labParity;

		// return a. > b.out;
	}
}

void solve() {
	int tc, n, m, x, y, cnt, prev; cin >> tc;

	while (tc--) {
		cin >> n >> m; cnt = 0;
		vector<int> labs(n + 1, 0);
		Nodes nodes[n + 1];
		for (int i = 1; i <= n; i++)
			nodes[i].id = i;

		for (int i = 1; i <= n; i++) {
			cin >> x;
			nodes[i].lab = x;
		}

		vector<vector<int> > adjLst(n + 1);

		for (int i = 1; i <= m; i++) {
			cin >> x >> y;

			adjLst[y].push_back(x);
			nodes[x].in++;
			nodes[y].out++;
		}

		sort(nodes + 1, nodes + 1 + n, cmprtr);
		labParity = nodes[1].lab;
		prev = nodes[1].lab;

		for (int i = 1, j = n; j; j--) {
			for (int j = 0; j < adjLst[nodes[i].id].size(); j++)
				nodes[adjLst[nodes[i].id][j]].in--;

			if (prev != nodes[i].lab)
				cnt++;

			prev = nodes[i].lab;

			nodes[i].in = MAX; nodes[i].out = MAX;
			sort(nodes + 1, nodes + 1 + n, cmprtr);
			labParity = nodes[1].lab;
		}

		cout << cnt << endl;
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