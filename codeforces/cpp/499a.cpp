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
  int n, x, i, r = 0;
  cin >> n >> x;
  vector<pair<int, int> > v;
  pair<int, int> p;
  for (i = 0; i != n; i++)
  {
    scanf("%d %d", &p.first, &p.second);
    v.push_back(p);
  }
  r = v[n - 1].second;
  r -= ((v[0].first - 1) / x) * x;
  for (i = 0; i != n - 1; i++)
  {
    r -= ((v[i + 1].first - v[i].second - 1) / x) * x;
  }
  cout << r << endl;

  return 0;
}
