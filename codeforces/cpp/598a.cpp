#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <vector>
#include <map>
#include <string>
#include <iomanip>
#include <utility>

using namespace std;
typedef long double db;
typedef long long ll;

int main()
{
  ll t, i, r, k;
  cin >> t;
  vector<ll> v(t);
  for (i = 0; i < t; i++)
  {
    cin >> k;
    v[i] = k;
  }
  for (i = 0; i < t; i++)
  {
    r = (1 + v[i]) * v[i] / 2;
    k = log2(v[i]);
    k = pow(2, k + 1) - 1;
    r -= 2 * k;
    cout << r << endl;
  }
  return 0;
}
