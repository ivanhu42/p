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
  int n, s, i, r = -1;
  cin >> n >> s;
  pair<int, int> sugar;
  vector<pair<int, int> > v;
  for (i = 0; i != n; i++)
  {
    scanf("%d %d", &sugar.first, &sugar.second);
    v.push_back(sugar);
  }
  for (i = 0; i != n; i++)
  {
    if (v[i].first > s)
      continue;
    else if (v[i].first == s)
    {
      if (v[i].second > 0)
        continue;
      else
        r = max(r, 0);
    }
    else
    {
      if (v[i].second == 0)
        r = max(r, 0);
      else
        r = max(r, 100 - v[i].second);
    }
  }
  cout << r << endl;

  return 0;
}
