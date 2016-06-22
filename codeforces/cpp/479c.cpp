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

bool sort_first(pair<ll, ll> p1, pair<ll, ll> p2)
{
  if (p1.first == p2.first)
    return (p1.second < p2.second);
  else
    return (p1.first < p2.first);
}

int main()
{
  ll n, a, b, i, r = -1;
  pair<ll, ll> p;
  cin >> n;
  vector<pair<ll, ll> > v(n);
  for (i = 0; i < n; i++)
  {
    cin >> a >> b;
    p.first = a;
    p.second = b;
    v[i] = p;
  }
  sort(v.begin(), v.end(), sort_first);
  for (i = 0; i < n; i++)
  {
    if (r <= v[i].second)
      r = v[i].second;
    else
      r = v[i].first;
  }
  cout << r << endl;
  return 0;
}
