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
  int n, i, info = 0, turn = 0;
  cin >> n;
  vector<int> v(n);
  vector<bool> b(n, true);
  for (i = 0; i < n; i++)
    scanf("%d", &v[i]);
  while (info != n)
  {
    for (i = 0; i < n; i++)
    {
      if (b[i] && v[i] <= info)
      {
        b[i] = false;
        info++;
      }
    }
    if (info == n)
      break;
    else
      turn++;
    for (i = n - 1; i >= 0; i--)
    {
      if (b[i] && v[i] <= info)
      {
        b[i] = false;
        info++;
      }
    }
    if (info == n)
      break;
    else
      turn++;
  }
  cout << turn << endl;
  return 0;
}
