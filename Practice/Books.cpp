#include<iostream>
using namespace std;

int main() {
  int num, freeTime, left = 0, res = 0;
  cin >> num >> freeTime;
  int books[num + 1];
  books[0] = 0;

  for (int i = 1; i <= num; i++) {
    cin >> books[i];
    books[i] += books[i - 1];

    if (books[i] - books[left] > freeTime) left++;

    res = max((i - left), res);
  }
  cout << res << endl;
}
