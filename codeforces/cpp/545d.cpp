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
  ll n, i, t;
  cin >> n;
  vector<ll> v;
  vector<ll> r;
  for (i = 0; i != n; i++)
  {
    cin >> t;
    v.push_back(t);
  }
  sort(v.begin(), v.end());
  t = 0;
  for (i = 0; i != n; i++)
  {
    if (v[i] >= t)
    {
      t += v[i];
      r.push_back(v[i]);
    }
  }
  cout << r.size() << endl;

  return 0;
}
