#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;

  cout << (char)((n-1)%8+'a') << (n-1)/8+1;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}