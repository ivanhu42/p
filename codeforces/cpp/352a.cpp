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
  int n, i, five = 0, zero = 0;
  char c;
  cin >> n;
  for (i = 0; i != n; i++)
  {
    cin >> c;
    if (c == '5')
      five++;
    else
      zero++;
  }
  if (five < 9)
  {
    if (zero != 0)
      cout << 0 << endl;
    else
      cout << -1 << endl;
  }
  else
  {
    if (zero != 0)
    {
      five = (five / 9) * 9;
      for (i = 0; i != five; i++)
        cout << '5';
      for (i = 0; i != zero; i++)
        cout << '0';
      cout << endl;
    }
    else
      cout << -1 << endl;
  }

  return 0;
}
