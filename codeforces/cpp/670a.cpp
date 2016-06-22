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
  int n, r1, r2;
  cin >> n;
  if (n <= 2)
  {
    cout << "0 " << n << endl;
  }
  else if (n > 2 && n <= 5)
  {
    cout << "0 2" << endl;
  }
  else if (n > 5 && n <= 7)
  {
    cout << n - 5 << " 2" << endl;
  }
  else
  {
    if (n % 7 <= 2)
    {
      r1 = n / 7 * 2;
      r2 = r1 + n % 7;
    }
    else if (n % 7 > 2 && n % 7 <= 5)
    {
      r1 = n / 7 * 2;
      r2 = r1 + 2;
    }
    else
    {
      r1 = n / 7 * 2 + 1;
      r2 = r1 + 1;
    }
    cout << r1 << " " << r2 << endl;
  }

  return 0;
}
