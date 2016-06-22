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
  ll l, r;
  cin >> l >> r;
  if (r - l < 2)
    cout << -1 << endl;
  else if (r - l == 2)
  {
    if (l % 2 == 0)
      cout << l << " " << l + 1 << " " << r << endl;
    else
      cout << -1 << endl;
  }
  else
  {
    if (l % 2 == 0)
      cout << l << " " << l + 1 << " " << l + 2 << endl;
    else
      cout << l + 1 << " " << l + 2 << " " << l + 3 << endl;
  }

  return 0;
}
