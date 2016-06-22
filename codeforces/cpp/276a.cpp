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
  ll n, k, i, r;
  scanf("%lld%lld", &n, &k);
  vector<pair<ll, ll> > v(n);
  for (i = 0; i < n; i++)
    scanf("%I64d%I64d", &v[i].first, &v[i].second);
  r = v[0].first - max(v[0].second - k, (ll) 0);
  for (i = 1; i < n; i++)
    r = max(r, v[i].first - max(v[i].second - k, (ll) 0));
  printf("%I64d\n", r);
  return 0;
}
