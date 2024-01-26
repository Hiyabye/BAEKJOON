#include <iostream>
using namespace std;

void solve(void) {
  int a, b, c; cin >> a >> b >> c;

  cout << (a + b) % c << "\n";
  cout << ((a % c) + (b % c)) % c << "\n";
  cout << (a * b) % c << "\n";
  cout << ((a % c) * (b % c)) % c;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}