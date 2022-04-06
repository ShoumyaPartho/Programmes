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

template<typename T>

class BIT {
public:
	vector<T> ft;
	int N;

	BIT(int n) {
		ft.assign(n + 1, 0);
		N = n;
	}

	T getSum(int n) {
		int sum = 0, i = n;

		while (i) {
			sum += ft[i];
			i -= (i & (-i));
		}

		return sum;
	}

	T getSum(int L, int R) {
		return (getSum(R) - getSum(L));
	}

	void update(int n, T x) {
		int i = n;

		while (i <= N) {
			ft[i] += x;
			i += (i & (-i));
		}
	}
};

ll invCntUsingBIT(vector<int> &ara, int n) {
	ll sum = 0;
	BIT<int> tree(n);

	for (int i = 1; i <= n; i++) {
		sum += tree.getSum(ara[i], n);
		tree.update(ara[i], 1);
	}

	return sum;
}

ll merge(vector<int> &ara, vector<int> &temp, int left, int mid, int right) {
	ll i = left, j = mid + 1, k = left, sum = 0;

	for (; i <= mid and j <= right;) {
		if (ara[i] <= ara[j])
			temp[k++] = ara[i++];

		else {
			temp[k++] = ara[j++];
			sum += (mid - i + 1);
		}
	}

	while (i <= mid)
		temp[k++] = ara[i++];

	while (j <= right)
		temp[k++] = ara[j++];

	for (int i = left; i <= right; i++)
		ara[i] = temp[i];

	return sum;
}

ll mergeSort(vector<int> &ara, vector<int> &temp, int left, int right) {

	ll invCnt = 0;

	if (left < right) {
		int mid = (left + right) >> 1;

		invCnt += mergeSort(ara, temp, left, mid);
		invCnt += mergeSort(ara, temp, mid + 1, right);
		invCnt += merge(ara, temp, left, mid, right);
	}

	return invCnt;
}

ll invCntUsingMergeSort(vector<int> &ara, int n) {
	vector<int> temp(n + 1, 0);
	ll sum = mergeSort(ara, temp, 1, n);

	return sum;
}

void solve() {
	int tc, n, flag; cin >> tc;

	while (tc--) {
		cin >> n; flag = 0; ll invCnt = 0;

		vector<int> num(n + 1, 0), ara(n + 1, 0);

		for (int i = 1; i <= n; i++) {
			cin >> ara[i];
			num[i] = ara[i];
		}

		// invCnt = invCntUsingBIT(ara, n);

		invCnt = invCntUsingMergeSort(ara, n);

		if (invCnt % 2 == 0) {
			cout << "YES" << endl;
			continue;
		}

		sort(num.begin() + 1, num.end());

		for (int i = 1; i < n; i++) {
			if (num[i] == num[i + 1]) {
				flag = 1;
				break;
			}
		}

		cout << (flag ? "YES" : "NO") << endl;
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