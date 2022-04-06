#include<iostream>
using namespace std;

void fastIO() {
  ios_base::sync_with_stdio(false);
  cin.tie(0), cout.tie(0);

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
}

int main() {
  fastIO();

  int tc, num, n, temp, ara[10], indx, mod;
  cin >> tc;

  while (tc--) {
    cin >> n;
    for (indx = 0; indx < 10; indx++) ara[indx] = 0;
    indx = 0, mod = 10;

    while (n) {
      temp = n % mod;
      if (temp) ara[indx] = temp, n -= temp, indx++;
      mod *= 10;
    }

    cout << indx << "\n";
    for (int i = 0; i < indx; i++) cout << ara[i] << " \n"[i == (indx - 1)];
  }
  return 0;
}
