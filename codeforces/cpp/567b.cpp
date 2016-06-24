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
  int n, i, t, r = 0, mr = 0;
  char c;
  vector<bool> check(1000000, false);
  cin >> n;
  for (i = 0; i != n; i++)
  {
    cin >> c >> t;
    t--;
    if (c == '+')
    {
      check[t] = true;
      r++;
      mr = max(mr, r);
    }
    else
    {
      if (check[t] == false)
      {
        mr++;
      }
      else
      {
        r--;
        check[t] = false;
      }
    }
  }
  cout << mr << endl;
  return 0;
}
