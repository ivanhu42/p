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
  int n, m, k, i, d, r = 0;
  cin >> n >> m >> k;
  for (i = 0; i != n; i++)
  {
    cin >> d;
    if (d == 1)
    {
      if (m != 0)
        m--;
      else
        r++;
    }
    else
    {
      if (k != 0)
        k--;
      else
      {
        if (m != 0)
          m--;
        else
          r++;
      }
    }
  }
  cout << r << endl;

  return 0;
}
