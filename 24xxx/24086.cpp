#include <iostream>
using namespace std;

void solve(void) {
  int a; cin >> a;
  int b; cin >> b;

  cout << b-a;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}