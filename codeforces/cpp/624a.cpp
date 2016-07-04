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
  double d, l, v1, v2, r;
  cin >> d >> l >> v1 >> v2;
  r = max((l - d) / (v1 + v2), 0.0);
  cout << setprecision(20) << r << endl;

  return 0;
}
