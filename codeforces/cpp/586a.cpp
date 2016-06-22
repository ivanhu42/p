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
  int n, i, s = -1, e = -1, b = 0, r = 0;
  cin >> n;
  vector<int> v(n);
  for (i = 0; i < n; i++)
    scanf("%d", &v[i]);
  for (i = 0; i < n; i++)
    if (v[i] == 1)
    {
      s = i;
      break;
    }
  for (i = n - 1; i >= 0; i--)
    if (v[i] == 1)
    {
      e = i;
      break;
    }
  if (s == -1 && e == -1)
    cout << 0 << endl;
  else
  {
    r = e - s + 1;
    if (r <= 3)
      cout << r << endl;
    else
    {
      for (i = s + 1; i < e; i++)
        if (v[i] == 0 && v[i + 1] == 0)
        {
          r--;
        }
        else if (v[i] == 0 && v[i - 1] == 0 && v[i + 1] == 1)
        {
          r--;
        }
      cout << r << endl;
    }
  }
  return 0;
}
