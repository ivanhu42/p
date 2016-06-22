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
  ll n;
  cin >> n;
  if (n % 2 == 0)
  {
    n /= 2;
    if (n % 2 == 0)
      cout << n / 2 - 1 << endl;
    else
      cout << n / 2 << endl;
  }
  else
    cout << 0 << endl;

  return 0;
}
