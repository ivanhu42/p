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

bool s_p_f(pair<int, int> p1, pair<int, int> p2)
{
  return (p1.first < p2.first);
}

bool s_n_f(pair<int, int> p1, pair<int, int> p2)
{
  return (p1.first > p2.first);
}

int main()
{
  int n, i, r = 0, ln, lp;
  cin >> n;
  pair<int, int> p;
  vector<pair<int, int> > vn;
  vector<pair<int, int> > vp;
  for (i = 0; i != n; i++)
  {
    scanf("%d %d", &p.first, &p.second);
    if (p.first < 0)
      vn.push_back(p);
    else
      vp.push_back(p);
  }
  sort(vp.begin(), vp.end(), s_p_f);
  sort(vn.begin(), vn.end(), s_n_f);
  ln = vn.size();
  lp = vp.size();
  if (abs(ln - lp) <= 1)
  {
    for (i = 0; i != ln; i++)
      r += vn[i].second;
    for (i = 0; i != lp; i++)
      r += vp[i].second;
  }
  else
  {
    if (ln < lp)
    {
      for (i = 0; i != ln; i++)
        r += vn[i].second;
      for (i = 0; i != ln + 1; i++)
        r += vp[i].second;
    }
    else
    {
      for (i = 0; i != lp; i++)
        r += vp[i].second;
      for (i = 0; i != lp + 1; i++)
        r += vn[i].second;
    }
  }
  cout << r << endl;
  return 0;
}
