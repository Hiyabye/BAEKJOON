#include <iostream>
using namespace std;

void solve(void) {
  int a; cin >> a;
  int w, v; cin >> w >> v;

  cout << (w >= a * v);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}