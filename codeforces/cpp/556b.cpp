#include <algorithm>
#include <cctype>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <map>
#include <string>
#include <utility>
#include <vector>

using namespace std;
typedef long double db;
typedef long long ll;

int f1 (int n, int i, int s)
{
  if (n+i >= s)
    return n+i-s;
  else
    return n+i;
}

int f2 (int n, int i, int s)
{
  if (n-i < 0)
    return s+n-i;
  else
    return n-i;
}

int main()
{
  bool r;
  int n, i, j, t;
  vector<int> v;
  cin >> n;
  for (i = 0; i != n; i++)
  {
    cin >> t;
    v.push_back(t);
  }
  for (i = 0; i != n; i++)
  {
    for (j = 0; j != n; j++)
    {
      if (j % 2 == 0)
        v[j] = f1(v[j], 1, n);
      else
        v[j] = f2(v[j], 1, n);
    }
    r = true;
    for (j = 0; j != n; j++)
    {
      if (v[j] == j && r)
        r = true;
      else
        r = false;
    }
    if (r)
    {
      cout << "YES" << endl;
      return 0;
    }
  }
  cout << "NO" << endl;
  return 0;
}
