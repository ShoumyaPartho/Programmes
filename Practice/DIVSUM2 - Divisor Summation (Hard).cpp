// Solved by: Shoumya

#include<iostream>
#include<ctime>
#include<vector>
#include<algorithm>
#include<iomanip>
using namespace std;

#define endl "\n"
#define ll long long int
const ll MAX = 1e8 + 3;

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

vector<bool> nums(MAX, true);
vector<ll>	primes;

void generatePrimes() {
	primes.push_back(2);

	for (ll i = 3; i < MAX; i += 2) {
		if (nums[i]) {
			primes.push_back(i);

			for (ll j = i * i; j < MAX; j += i + i)
				nums[j] = false;
		}
	}
}

ll SOD(ll n) {
	ll ans = 1, tempNum, tempSum;

	for (int i = 0; i < primes.size() and (primes[i]*primes[i] <= n); i++) {
		if (not(n % primes[i])) {
			tempSum = tempNum = 1;

			while (not (n % primes[i])) {
				tempNum *= primes[i];
				tempSum += tempNum;
				n /= primes[i];
			}

			ans *= tempSum;
		}
	}

	if (n > 1)
		ans *= (n + 1);

	return ans;
}

void solve() {
	generatePrimes();

	ll tc, n; cin >> tc;

	while (tc--) {
		cin >> n;

		cout << SOD(n) - n << endl;
	}
}

int main() {
	fastIO();
	clock_t start = clock();
	// Write code here...

	solve();

#ifndef ONLINE_JUDGE
	clock_t stop = clock(); cout.precision(3);
	cout << fixed << "\n\nTime taken: " << (double)(stop - start) / CLOCKS_PER_SEC << " seconds" << endl;
#endif

	return 0;
}










// #include<iostream>
// #include<vector>
// #include<cmath>
// using namespace std;

// vector<int> prime;
// bool check[100000010];

// void soe(){
//     prime.push_back(2);
//     int sqrtn=sqrt(100000010)+1;
//     for(int i=3;i<100000010;i+=2){
//         if(check[i]==false){
//             prime.push_back(i);
//             if(i<sqrtn){
//                 for(int j=i*i;j<=100000010;j+=i+i) check[j]=true;
//             }
//         }
//     }
// }

// long long int SOD(long long int n){
//     long long int res=1,p,temp,t=n;
//     for(int i=0;i<prime.size() && i*i<n;i++){
//         //if(prime[i]>n) break;
//         p=temp=1;
//         while(n%prime[i]==0){
//             n/=prime[i];
//             p*=prime[i];
//             temp+=p;
//         }
//         res*=temp;
//     }
//     if(n>1) res*=(n+1);
//     //cout<<res-t<<endl;
//     return res;
// }

// int main(){
//     soe();
//     long long int tc,n;
//     cin>>tc;

//     while(tc--){
//         cin>>n;
//         cout<<SOD(n)-n<<endl;
//     }
// }
