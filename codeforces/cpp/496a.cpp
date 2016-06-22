#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <vector>
#include <map>
#include <string>
#include <iomanip>

using namespace std;
typedef long double db;
typedef long long ll;

int main()
{
  int n, i, j, a, tr, r = 1000;
  cin >> n;
  vector<int> v(n);
  vector<int> t;
  for (i = 0; i < n; i++)
  {
    cin >> a;
    v[i] = a;
  }
  for (i = 1; i < n - 1; i++)
  {
    tr = 0;
    t = v;
    t.erase(t.begin() + i);
    for (j = 0; j < n - 2; j++)
      tr = max(tr, t[j + 1] - t[j]);
    r = min(r, tr);
  }
  cout << r << endl;
  return 0;
}
