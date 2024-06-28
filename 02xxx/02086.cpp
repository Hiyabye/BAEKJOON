#include <iostream>
#include <vector>
#define MOD 1000000000
using namespace std;
using Matrix = vector<vector<long long>>;

Matrix matmul(Matrix a, Matrix b) {
  Matrix c(2, vector<long long>(2));
  for (int i=0; i<2; i++) for (int j=0; j<2; j++) for (int k=0; k<2; k++) {
    c[i][j] = (c[i][j] + a[i][k] * b[k][j]) % MOD;
  }
  return c;
}

Matrix matpow(Matrix base, long long exp) {
  Matrix ret(2, vector<long long>(2, 0));
  for (int i=0; i<2; i++) ret[i][i] = 1;
  while (exp) {
    if (exp & 1) ret = matmul(ret, base);
    base = matmul(base, base);
    exp >>= 1;
  }
  return ret;
}

long long f(long long n) {
  return matpow({{1, 1}, {1, 0}}, n+2)[0][1] - 1;
}

void solve(void) {
  long long a, b; cin >> a >> b;
  
  cout << (f(b) - f(a-1) + MOD) % MOD;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}