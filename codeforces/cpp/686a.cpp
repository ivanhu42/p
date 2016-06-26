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
  ll n, x, i, d, r = 0;
  char c;
  cin >> n >> x;
  for (i = 0; i != n; i++)
  {
    cin >> c >> d;
    if (c == '+')
      x += d;
    else
    {
      if (d <= x)
        x -= d;
      else
        r++;
    }
  }
  cout << x << " " << r << endl;
  return 0;
}
