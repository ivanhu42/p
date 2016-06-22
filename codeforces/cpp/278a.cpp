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
  int n, i, s, t, l = 0, r = 0;
  cin >> n;
  vector<int> v;
  for (i = 0; i != n; i++)
  {
    cin >> s;
    l += s;
    v.push_back(s);
  }
  cin >> s >> t;
  for (i = min(s, t) - 1; i != max(s, t) - 1; i++)
    r += v[i];
  r = min(r, l - r);
  cout << r << endl;
  return 0;
}
