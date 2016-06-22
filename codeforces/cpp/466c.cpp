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
  ll n, a, i, s = 0, tem, rez = 0;
  vector<ll> v;
  cin >> n;
  for (i = 0; i != n; i++)
  {
    cin >> a;
    v.push_back(a);
    s += a;
  }
  if (s % 3 != 0)
    cout << 0 << endl;
  else
  {
    vector<ll> r(n, 0);
    tem = 0;
    s = s / 3;
    for (i = n - 1; i != -1; i--)
    {
      tem += v[i];
      if (tem == s)
        r[i] = 1;
    }
    for (i = n - 2; i != -1; i--)
      r[i] += r[i + 1];
    tem = 0;
    for (i = 0; i != n - 2; i++)
    {
      tem += v[i];
      if (tem == s)
        rez += r[i + 2];
    }
    cout << rez << endl;
  }
  return 0;
}
