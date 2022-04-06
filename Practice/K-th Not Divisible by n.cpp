#include<iostream>
#include<ctime>
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
	ll tc, n, k, res; cin >> tc;
	while (tc--) {
		cin >> n >> k;
		res = k + ((k - 1) / (n - 1)); // Sum of series ((1/n)+(1/n^2)+...), k is to be replaced with (k-1) to avoid overrate
		cout << res << endl;
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

// Sadman's Solution using Binary Search...

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0),cout.tie(0);
//     ll t;
//     cin>>t;
//     while(t--)
//     {
//         ll n,k,mid,x,high,low,ans;
//         cin>>n>>k;
//         low=1;
//         high=1e12;
//         while(low<=high)
//         {
//             mid=(high+low)/2;
//             x=mid/n;
//             x=mid-x;
//             if(x>k)
//             {
//                 high=mid-1;
//             }
//             else if(x<k)
//             {
//                 low=mid+1;
//             }
//             else
//             {
//                 if(mid%n!=0)
//                 {
//                     ans=mid;
//                     break;
//                 }
//                 else
//                 {
//                     high=mid-1; // Ans must be on left side
//                 }
//             }
//         }
//         cout<<ans<<endl;
//     }
// }