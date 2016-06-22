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
  ll n, r = 0, t;
  cin >> n;
  bool lucky = false;
  while (!lucky)
  {
    r++;
    n++;
    t = n;
    while (t != 0)
    {
      if (t % 10 == 8 || t % 10 == -8)
      {
        lucky = true;
        break;
      }
      t /= 10;
    }
  }
  cout << r << endl;
  return 0;
}
