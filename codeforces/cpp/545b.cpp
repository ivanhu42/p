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
  vector<int> v;
  string s, t, p;
  cin >> s >> t;
  p = t;
  int n = s.size(), i, tem;
  for (i = 0; i != n; i++)
  {
    if (s[i] != t[i])
      v.push_back(i);
  }
  tem = v.size();
  if (tem % 2 != 0)
  {
    cout << "impossible" << endl;
    return 0;
  }
  else
  {
    for (i = 0; i != tem; i += 2)
      p[v[i]] = s[v[i]];
    cout << p << endl;
  }

  return 0;
}
