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
  string str;
  cin >> str;
  l = str.size();
  r = ((int) str[l - 1]) - 48 + (((int) str[l - 2]) - 48) * 10;
  if (r % 4 == 0)
    cout << 4 << endl;
  else
    cout << 0 << endl;

  return 0;
}
