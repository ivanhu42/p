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
  int a, x, y;
  cin >> a >> x >> y;
  if (x < 0 || y < 0 || x > a || y > a)
    cout << 2 << endl;
  else if (x > 0 && x < a && y > 0 && y < a)
    cout << 0 << endl;
  else
    cout << 1 << endl;
  return 0;
}
