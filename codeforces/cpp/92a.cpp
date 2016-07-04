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
  ll n, m, i = 1;
  cin >> n >> m;
  while (m >= i)
  {
    m -= i;
    if (i == n)
      i = 1;
    else
      i++;
  }
  cout << m << endl;

  return 0;
}
