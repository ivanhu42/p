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
#include <cctype>

using namespace std;
typedef long double db;
typedef long long ll;

int main()
{
  ll n, x, i, t, r = 0;
  vector<ll> v;
  cin >> n >> x;
  for (i = 0; i != n; i++)
  {
    cin >> t;
    v.push_back(t);
  }
  sort(v.begin(), v.end());
  for (i = 0; i != n; i++)
  {
    if (x == 1)
      r += v[i];
    else
    {
      r += x * v[i];
      x--;
    }
  }
  cout << r << endl;
  return 0;
}
