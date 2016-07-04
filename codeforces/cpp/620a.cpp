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
  ll x1, y1, x2, y2, r;
  cin >> x1 >> y1;
  cin >> x2 >> y2;
  r = max(abs(x1-x2),abs(y1-y2));
  cout << r << endl;
  return 0;
}
