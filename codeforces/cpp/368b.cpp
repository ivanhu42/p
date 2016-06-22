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
  int n, m, i, j, k, len;
  cin >> n >> m;
  vector<int> a;
  vector<int> l;
  vector<int> r(n, 0);
  vector<bool> num(100000, true);
  for (i = 0; i != n; i++)
  {
    cin >> k;
    a.push_back(k);
  }
  for (i = 0; i != m; i++)
  {
    cin >> k;
    l.push_back(k);
  }
  r[n-1] = 1;
  num[a[n-1]-1] = false;
  for (i = n - 2; i != -1; i--)
  {
    if (num[a[i] - 1])
    {
      r[i] = r[i + 1] + 1;
      num[a[i] - 1] = false;
    }
    else
      r[i] = r[i + 1];
  }
  for (i = 0; i != m; i++)
    cout << r[l[i]-1] << endl;
  return 0;
}
