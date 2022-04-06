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

int findBigMod(int base, int power, int mod) {
    if (power == 0)
        return 1 % mod;

    if (power == 1)
        return base % mod;

    int temp = findBigMod(base, power / 2, mod);
    temp = ((temp % mod) * (temp % mod)) % mod;

    if (power & 1)
        return (((temp % mod) * (base % mod)) % mod);

    else
        return temp;
}

void solve() {
    int b, p, m;

    while (cin >> b >> p >> m)
        cout << findBigMod(b, p, m) % m << endl;
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
// #include<cstdio>
// using namespace std;

// int main(){
//     unsigned int b,p,m,s;

//     while(scanf("%u %u %u",&b,&p,&m)!=EOF){
//         s=1;
//         while(p){
//             if(p%2==1) s=((s%m)*(b%m))%m;
//             p/=2;
//             b=((b%m)*(b%m))%m;
//         }
//         printf("%u\n",s);
//     }
//     return 0;
// }
