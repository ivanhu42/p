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
  int a, b, r = 0;
  cin >> a >> b;
  while ((a > 1 || b > 1) && (a != 0 && b != 0))
  {
    if (a == 1)
    {
      a++;
      b -= 2;
    }
    else if (b == 1)
    {
      b++;
      a -= 2;
    }
    else
    {
      if (a <= b)
      {
        a++;
        b -= 2;
        a = min(a, 100);
      }
      else
      {
        b++;
        a -= 2;
        b = min(b, 100);
      }
    }
    r++;
  }
  cout << r << endl;
  return 0;
}
