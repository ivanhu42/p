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
  int n, m, r, i, t = 0;
  cin >> n >> m;
  vector<int> v;
  for (i = 0; i != n; i++)
  {
    cin >> r;
    v.push_back(r);
  }
  r = 0;
  for (i = 0; i != n; i++)
  {
    if (m - t < v[i])
    {
      r++;
      t = 0;
      i--;
    }
    else
    {
      t += v[i];
    }
  }
  cout << r + 1 << endl;

  return 0;
}
