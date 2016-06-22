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
  ll n, a, i, m;
  cin >> n;
  vector<ll> v(n);
  vector<ll> r(n);
  for (i = 0; i < n; i++)
  {
    cin >> a;
    v[i] = a;
  }
  r[n - 1] = 0;
  m = v[n - 1];
  for (i = n - 2; i >= 0; i--)
  {
    if (v[i] > m)
    {
      r[i] = 0;
      m = v[i];
    }
    else
      r[i] = m - v[i] + 1;
  }
  for (i = 0; i < n; i++)
    cout << r[i] << " ";
  cout << endl;
  return 0;
}
