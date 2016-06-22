#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int n, k, l, c, d, p, nl, np, r;
  cin >> n >> k >> l >> c >> d >> p >> nl >> np;
  r = min(k * l / nl, min(c * d, p / np)) / n;
  cout << r << endl;
  return 0;
}
