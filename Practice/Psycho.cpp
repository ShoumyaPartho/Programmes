// Solved by: Shoumya

#include<iostream>
#include<ctime>
#include<vector>
#include<algorithm>
#include<iomanip>
using namespace std;

#define endl "\n"
#define ll long long int
const int MAX = 1e4 + 3;

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

vector<bool> nums(MAX, true);
vector<int> primes;

void generatePrimes() {
	primes.push_back(2);

	for (int i = 3; i < MAX; i += 2) {
		if (nums[i]) {
			primes.push_back(i);

			for (int j = i * i; j < MAX; j += i + i)
				nums[j] = false;
		}
	}
}

bool factorize(int n) {
	int odd = 0, even = 0, cnt;

	for (int i = 0; i < primes.size() and (primes[i]*primes[i] <= n); i++) {
		if (not(n % primes[i])) {
			cnt = 0;

			while (not(n % primes[i])) {
				n /= primes[i];
				cnt++;
			}

			if (cnt & 1)
				odd++;
			else
				even++;
		}
	}

	if (n > 1)
		odd++;

	return even > odd;
}

void solve() {
	generatePrimes();

	int tc, n; cin >> tc;

	while (tc--) {
		cin >> n;

		cout << (factorize(n) ? "Psycho Number" : "Ordinary Number") << endl;
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









// #include<iostream>
// #include<vector>
// #include<cmath>
// using namespace std;

// vector<int> v;
// bool check[100010];

// void primelist(){
//     v.push_back(2);
//     int sqrtn=sqrt(100010);
//     for(int i=3;i<=100010;i+=2){
//         if(!check[i]){
//             v.push_back(i);
//             if(i<=sqrtn) {
//                 for(int j=i*i;j<=100010;j+=i+i) check[j]=true;
//             }
//         }
//     }
// }

// void fact(int n){
//     int odd,even,cnt;
//     odd=even=cnt=0;
//     int sqrtn=sqrt(n);
//     for(int i=0;i<v.size() && v[i]<=sqrtn;i++){
//         if(n<v[i]) break;
//         if(n%v[i]==0){
//             cnt=0;
//             while(n%v[i]==0){
//                 cnt++;
//                 n/=v[i];
//             }
//             if(cnt%2==1) odd++;
//             else if(cnt%2==0) even++;
//         }
//     }
//     if(n>1) odd++;
//     if(even > odd) cout<<"Psycho Number"<<endl;
//     else cout<<"Ordinary Number"<<endl;
// }

// int main(){
//     primelist();

//     int tc,n;
//     cin>>tc;

//     while(tc--){
//         cin>>n;
//         if(n==0 || n==1) cout<<"Ordinary Number"<<endl;
//         else fact(n);
//     }
//     return 0;
// }
