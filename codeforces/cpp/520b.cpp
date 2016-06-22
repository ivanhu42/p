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
  int n, m, r = 0;
  cin >> n >> m;
  while (n != m)
  {
    if (m < n)
      m++;
    else
    {
      if (m % 2 == 0)
        m /= 2;
      else
        m++;
    }
    r++;
  }
  cout << r << endl;
  return 0;
}
