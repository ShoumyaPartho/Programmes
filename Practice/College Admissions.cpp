#include<iostream>
#include<vector>
#include<algorithm>
#include<ctime>
using namespace std;

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

class College {
public:
	int rank, id, vacant = 1;
};

class Student {
public:
	vector<pair<int, int> > colList;
	int rank, id;
};

bool cmprtr(Student &s1, Student &s2) {
	return s1.rank < s2.rank;
}

bool colcmp(College &c1, College &c2) {
	return c1.rank < c2.rank;
}

bool cmp(pair<int, int> &a, pair<int, int> &b) {
	return a.second < b.second;
}

void solve() {
	int tc, n, m, k, x, flag, c; cin >> tc; //n = num of colleges, m = num of students
	while (tc--) {
		cin >> n >> m;
		College colg[n + 1];
		Student stdnt[m + 1];
		for (int i = 1; i <= n; i++) {
			colg[i].id = i;
			cin >> colg[i].rank;
		}
		for (int i = 1; i <= m; i++) {
			stdnt[i].id = i;
			cin >> stdnt[i].rank;
		}
		for (int i = 1; i <= m; i++) {
			cin >> k;
			for (int j = 1; j <= k; j++) {
				cin >> x;
				c = colg[x].rank;
				stdnt[i].colList.push_back({x, c});
			}
			sort(stdnt[i].colList.begin(), stdnt[i].colList.end(), cmp);
		}
		sort(stdnt + 1, stdnt + m + 1, cmprtr);
		sort(colg + 1, colg + n + 1, colcmp);
		flag = 0;
		for (int i = 1; i <= m; i++) {
			if (stdnt[i].id == 1) {
				for (int j = 0; j < stdnt[i].colList.size(); j++) {
					x = stdnt[i].colList[j].second;
					if (colg[x].vacant) {
						cout << colg[x].id << "\n";
						colg[x].vacant--;
						flag = 1;
						break;
					}
				}
				if (not flag) cout << 0 << "\n";
				break;
			}
			else {
				for (int j = 0; j < stdnt[i].colList.size(); j++) {
					x = stdnt[i].colList[j].second;
					if (colg[x].vacant) {
						// cout<<colg[x].id<<"\n";
						colg[x].vacant--;
						//flag=1;
						break;
					}
				}
			}
		}
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